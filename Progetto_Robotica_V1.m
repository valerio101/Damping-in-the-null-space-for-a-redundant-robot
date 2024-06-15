clear all
clc
syms q1 q2 q3 q4 q5 q6 q7 d1 d2
syms qdot1 qdot2 qdot3 qdot4 qdot5 qdot6 qdot7
syms rx1 rx2 rx3 rx4 rx5 rx6 rx7 ry1 ry2 ry3 ry4 ry5 ry6 ry7 rz1 rz2 rz3 rz4 rz5 rz6 rz7
syms m1 m2 m3 m4 m5 m6 m7 
syms I1xx I1xy I1xz I1yy I1yz I1zz I2xx I2xy I2xz I2yy I2yz I2zz I3xx I3xy I3xz I3yy I3yz I3zz  I4xx I4xy I4xz I4yy I4yz I4zz 
syms I5xx I5xy I5xz I5yy I5yz I5zz  I6xx I6xy I6xz I6yy I6yz I6zz I7xx I7xy I7xz I7yy I7yz I7zz  

%definisco la DH_table
Dh=[0 pi/2 0 q1;0 -pi/2 0 q2;0 -pi/2 d1 q3;0 pi/2 0 q4;0 pi/2 d2 q5; 0 -pi/2 0 q6;0 0 0 q7];
% modificata Dh=[0 0 0 q1;0 pi/2 0 q2;0 -pi/2 d1 q3;0 -pi/2 0 q4;0 pi/2 d2 q5; 0 pi/2 0 q6;0 -pi/2 0 q7];

%prendo le matrici derivate dalla Dh
[T,A]=DHMatrix(Dh);
A1=A{1};
A2=A{2};
A3=A{3};
A4=A{4};
A5=A{5};
A6=A{6};
A7=A{7};
Atot=A1*A2*A3*A4*A5*A6*A7;

%prendo il vettore che collega base con manipolatore
f=Atot(1:3,4);
%save('saveVariables.mat', 'f', '-append');

%Calcolo Jacobiana
disp('fatto')
J =simplify(jacobian(f,[q1,q2,q3,q4,q5,q6,q7]));

%matrici di inerzia
I1=[I1xx I1xy I1xz;I1xy I1yy I1yz;I1xz I1yz I1zz];
I2=[I2xx I2xy I2xz;I2xy I2yy I2yz;I2xz I2yz I2zz];
I3=[I3xx I3xy I3xz;I3xy I3yy I3yz;I3xz I3yz I3zz];
I4=[I4xx I4xy I4xz;I4xy I4yy I4yz;I4xz I4yz I4zz];
I5=[I5xx I5xy I5xz;I5xy I5yy I5yz;I5xz I5yz I5zz];
I6=[I6xx I6xy I6xz;I6xy I6yy I6yz;I6xz I6yz I6zz];
I7=[I7xx I7xy I7xz;I7xy I7yy I7yz;I7xz I7yz I7zz];

%vettore del centro di massa
rc = [rx1 rx2 rx3 rx4 rx5 rx6 rx7;ry1 ry2 ry3 ry4 ry5 ry6 ry7;rz1 rz2 rz3 rz4 rz5 rz6 rz7];
disp('arrivo');
%movingFrame
[omega, v, vc] = MovingFrames(Dh, 'rrrrrrr', rc);

%calcolo energia cinetica
T1=energiaKinetica(vc{1},omega{1},m1,I1);
T2=energiaKinetica(vc{2},omega{2},m2,I2);
T3=energiaKinetica(vc{3},omega{3},m3,I3);
T4=energiaKinetica(vc{4},omega{4},m4,I4);
T5=energiaKinetica(vc{5},omega{5},m5,I5);
T6=energiaKinetica(vc{6},omega{6},m6,I6);
T7=energiaKinetica(vc{7},omega{7},m7,I7);
Ttot=T1+T2+T3+T4+T5+T6+T7;

%definisco vettori q e qdot
qdot = [qdot1; qdot2; qdot3; qdot4; qdot5; qdot6; qdot7];
q = [q1; q2; q3; q4; q5; q6; q7];

%calcolo matrici di inerzia
M = getInertiaMatrix(Ttot, qdot);

%calcolo termini di corioli
[c,CTot] = getCorioli(M,q,qdot);

q = [q1; q2; q3; q4; q5; q6; q7];
U1=-m1*ry1*[0 9.81 0]*A1(1:3,4);
A12=A1*A2;
U2=-m2*ry2*[0 9.81 0]*A12(1:3,4);
A123=A1*A2*A3;
U3=-m3*ry3*[0 9.81 0]*A123(1:3,4);
A1234=A1*A2*A3*A4;
U4=-m4*ry4*[0 9.81 0]*A1234(1:3,4);
A12345=A1*A2*A3*A4*A5;
U5=-m5*ry5*[0 9.81 0]*A12345(1:3,4);
A123456=A1*A2*A3*A4*A5*A6;
U6=-m6*ry6*[0 9.81 0]*A123456(1:3,4);
A1234567=A1*A2*A3*A4*A5*A6*A7;
U7=-m7*ry7*[0 9.81 0]*A1234567(1:3,4);
Utot=U1+U2+U3+U4+U5+U6+U7;

%calcolo termine di gravitazionale
g=getEnergyPotential(Utot,q);

%salvo le variabili M c J g
save('saveVariables.mat', 'M', 'c', 'J','g');

%Funzioni
function [T, A] = DHMatrix(arrays)

% T = DHMatrix(arrays) takes as inputs:
%   -arrays: a n-vector of vectors composed like this: [alpha a d theta]
% and outputs:
%   -T: the product of all the matrices corresponding to each vector of arrays
% Remember that:
% cos(q1 + q2) = cos(q1)*cos(q2) - sin(q1)*sin(q2)
% sin(q1 + q2) = cos(q1)*sin(q2) + cos(q2)*sin(q1)
% making use of the simplify function these are converted automatically
    T = eye(4);
    nums = size(arrays);
    
    A = cell(1,nums(1));
    
    for i = 1:nums(1)
        line = arrays(i, :);
        R = [cos(line(4)) -cos(line(1))*sin(line(4)) sin(line(1))*sin(line(4)) line(2)*cos(line(4));
             sin(line(4)) cos(line(1))*cos(line(4)) -sin(line(1))*cos(line(4)) line(2)*sin(line(4));
             0 sin(line(1)) cos(line(1)) line(3);
             0 0 0 1;];
        A{i} = R;
        T = T * R;   
    end
end

function [omega, v, v_c] = MovingFrames(DH, joint_type, r_c)
    % DH è una matrice, con i vari elementi della tabella, nel seguente
    % ordine alpha, a, d, omega. 
    % joint_type è una stringa che descrive che tipo di giunti ci sono nel
    % robot, per esempio 'rr' oppure 'pr' (p=prismatic, r=revolute)
    % IMPORTANTE usare singolo apice e non doppio
    % r_c è la posizione del centro di massa, come vettore, per esempio r_c = [rx1 rx2 rx3;ry1 ry2 ry3;0 0 0];
    
    % Numero di links
    n = size(DH, 1);

    % Assicurati che la stringa joint_type abbia la stessa lunghezza di n
    if size(joint_type,2) ~= n
        error('La lunghezza della stringa joint_type deve corrispondere al numero di link');
    end

    % Definizione delle variabili simboliche per le velocità angolari dei joint
    syms qdot [n 1] real;
    
    % Inizializzazione delle variabili di velocità angolare e lineare
    omega = cell(n, 1);
    v = cell(n, 1);
    v_c = cell(n, 1);
    
    % Inizializzazione delle condizioni al contorno per il primo link
    omega0 = [0; 0; 0];
    v0 = [0; 0; 0];

    T = DHMatrix(DH(1, :)); % Ottenere la matrice omogenea
    R = T(1:3, 1:3); % Estrazione della matrice di rotazione

    sigma_i = (joint_type(1) == 'p');

    z = [0; 0; 1]; % Assumendo l'asse z standard per i frame DH
    r = T(1:3, 4); % Estrazione del vettore di posizione dal frame precedente al corrente

    omega{1} = simplify(transpose(R) * (omega0 + (1 - sigma_i) * qdot(1) * z));
    v{1} = simplify(transpose(R) * (v0 + sigma_i * qdot(1) * z + cross((omega0 + (1 - sigma_i) * qdot(1) * z), r)));
    v_c{1} = simplify(v{1} + cross(omega{1}, r_c(:,1)));

%     disp('Omega 1:');
%     disp(omega{1});  % Display the symbolic expression directly
%     disp('v 1:');
%     disp(v{1});      
%     disp('v_c 1:');
%     disp(v_c{1});
    
    %    Calcolo ricorsivo per i link successivi
    for i = 2:n
        % Utilizzo della funzione matrice_DH per ottenere la matrice di rotazione
        T = DHMatrix(DH(i, :)); % Ottenere la matrice omogenea
        R = T(1:3, 1:3); % Estrazione della matrice di rotazione

        % Determina se il joint è revolute (0) o prismatic (1)
        sigma_i = (joint_type(i) == 'p');

        z = [0; 0; 1]; % Assumendo l'asse z standard per i frame DH
        r = T(1:3, 4); % Estrazione del vettore di posizione dal frame precedente al corrente
        
        % Calcola la velocità angolare
        omega{i} = simplify(transpose(R) * (omega{i-1} + (1 - sigma_i) * qdot(i) * z));
        
        % Calcola la velocità lineare
        v{i} = simplify(transpose(R) * (v{i-1} + sigma_i * qdot(i) * z + cross((omega{i-1} + (1 - sigma_i) * qdot(i) * z), r)));
        
        % Calcola la velocità del centro di massa
        v_c{i} = simplify(v{i} + cross(omega{i}, r_c(:,i)));
        
%       fprintf('Omega %d:\n', i);
%       disp(omega{i});
%       fprintf('v %d:\n', i);
%       disp(v{i});
%       fprintf('v_c %d:\n', i);
%       disp(v_c{i});
    end
end

function Ti=energiaKinetica(vci,omega,m,I)
    Ti=simplify((1/2)*m*transpose(vci)*vci+(1/2)*transpose(omega)*I*omega);
end

function M = getInertiaMatrix(T, qdot)
    s = size(qdot,1);
    for i=1:s
        for j=i:s
            if i == j
                M(i,j) = diff(T,qdot(i),2);
            else
                temp = simplify(diff(T,qdot(i)));
                M(i,j) = diff(temp, qdot(j));
                M(j,i) = M(i,j); % symmetry
            end
        end
    end
end

function [c,CTot]= getCorioli(M,q,qdot)
% esempio chiamata [c,CTot]= getCorioli(M,[q1;q2;q3],[q1dot;q2dot;q3dot]);
    n=size(M);
    n=n(1);
    dM_dqi = sym(zeros(size(M)));
    c =sym(zeros(n, 1));
    CTot = cell(1,n);
    for i = 1:n
        colonnaM = jacobian(M(:,i), q);
        for j=1:n
            derivataM=jacobian(M(:,j),q(i));
            dM_dqi(:, j) = derivataM;
            
        end
        C = simplify(0.5*(colonnaM+transpose(colonnaM)-dM_dqi));
        fprintf('C%d \n', i);
        disp(C);
        CTot{i}=C;
        c1=simplify(transpose(qdot)*C*qdot);
        c(i)=c1;
        fprintf('c%d \n', i);
        disp(c(i));
    end
%     disp('c');
%     disp(simplify(c));
end

function g=getEnergyPotential(u,q)
%u è utot
    g=simplify(transpose(jacobian(u,q)));
end