clear all
clc
syms q1 q2 q3 q4 q5 q6 q7 d1 d2
syms qdot1 qdot2 qdot3 qdot4 qdot5 qdot6 qdot7
syms m1 m2 m3 m4 m5 m6 m7 
syms rx1 rx2 rx3 rx4 rx5 rx6 rx7 ry1 ry2 ry3 ry4 ry5 ry6 ry7 rz1 rz2 rz3 rz4 rz5 rz6 rz7
syms I1xx I1xy I1xz I1yy I1yz I1zz I2xx I2xy I2xz I2yy I2yz I2zz I3xx I3xy I3xz I3yy I3yz I3zz  I4xx I4xy I4xz I4yy I4yz I4zz 
syms I5xx I5xy I5xz I5yy I5yz I5zz  I6xx I6xy I6xz I6yy I6yz I6zz I7xx I7xy I7xz I7yy I7yz I7zz  

%matrice di inerzia con valori reali e simbolici
% I1=[I1xx I1xy I1xz;I1xy I1yy I1yz;I1xz I1yz I1zz];
% I2=[I2xx I2xy I2xz;I2xy I2yy I2yz;I2xz I2yz I2zz];
% I3=[I3xx I3xy I3xz;I3xy I3yy I3yz;I3xz I3yz I3zz];
% I4=[I4xx I4xy I4xz;I4xy I4yy I4yz;I4xz I4yz I4zz];
% I5=[I5xx I5xy I5xz;I5xy I5yy I5yz;I5xz I5yz I5zz];
% I6=[I6xx I6xy I6xz;I6xy I6yy I6yz;I6xz I6yz I6zz];
% I7=[I7xx I7xy I7xz;I7xy I7yy I7yz;I7xz I7yz I7zz];
% 
% I11=[0.598562 -0.001049 0.004288;-0.001049 0.035545 -0.099545;0.004288 0.035545 0.565422];
% I22=[0.041663 0.025914 -0.007890;0.025914 0.041160 0.010133;-0.007890 0.010133 0.054390];
% I33=[0.061423 -0.008671 -0.004271;-0.008671 0.025989 -0.019005;-0.004271 -0.019005 0.039490];
% I44=[0.012593 -0.002378 0.005175;-0.002378 0.013977 0.002782;0.005175 0.002782 0.007174];
% I55=[0.024067 -0.000901 -0.000411;-0.000901 0.006554 -0.010511;-0.000411 -0.010511 0.017884];
% I66=[0.007701 -0.001011 0.001449;-0.001011 0.003049 0.001540;0.001449 0.001540 0.006941];
% I77=[0.003495 -0.002318 0.000483;-0.002318 0.001854 0.000623;0.000483 0.000623 0.004954];

%carico matrici M g c
load('saveVariables.mat')
load('kuka_lbr4p_dyn_terms_num.mat')
%sostituisco i valori
% M=subs(M,[m1 m2 m3 m4 m5 m6 m7...
%     rx1 rx2 rx3 rx4 rx5 rx6 rx7 ry1 ry2 ry3 ry4 ry5 ry6 ry7 rz1 rz2 rz3 rz4 rz5 rz6 rz7]...
%     ,[4.32741 6.990093 1.453501 2.495117 1.463685 0.535484 0.414342 ...
%     -0.000237 0.006341 -0.001616 0.003828 -0.002197 0.001000 -0.002105...
%     0.027464 -0.078281 0.241064 -0.038670 -0.136560 0.011957 -0.000751...
%     -0.000510 0.181806 0.065227 0.242516 -0.026532 0.016761 0.055592]);
% M1=subs(M,[I1 I2 I3 I4 I5 I6 I7],[I11 I22 I33 I44 I55 I66 I77]);
% 
% g=subs(g,[m1 m2 m3 m4 m5 m6 m7...
%     rx1 rx2 rx3 rx4 rx5 rx6 rx7 ry1 ry2 ry3 ry4 ry5 ry6 ry7 rz1 rz2 rz3 rz4 rz5 rz6 rz7]...
%     ,[4.32741 6.990093 1.453501 2.495117 1.463685 0.535484 0.414342 ...
%     -0.000237 0.006341 -0.001616 0.003828 -0.002197 0.001000 -0.002105...
%     0.027464 -0.078281 0.241064 -0.038670 -0.136560 0.011957 -0.000751...
%     -0.000510 0.181806 0.065227 0.242516 -0.026532 0.016761 0.055592]);
% g1=subs(g,[I1 I2 I3 I4 I5 I6 I7],[I11 I22 I33 I44 I55 I66 I77]);
% 
% c=subs(c,[m1 m2 m3 m4 m5 m6 m7...
%     rx1 rx2 rx3 rx4 rx5 rx6 rx7 ry1 ry2 ry3 ry4 ry5 ry6 ry7 rz1 rz2 rz3 rz4 rz5 rz6 rz7]...
%     ,[4.32741 6.990093 1.453501 2.495117 1.463685 0.535484 0.414342 ...
%     -0.000237 0.006341 -0.001616 0.003828 -0.002197 0.001000 -0.002105...
%     0.027464 -0.078281 0.241064 -0.038670 -0.136560 0.011957 -0.000751...
%     -0.000510 0.181806 0.065227 0.242516 -0.026532 0.016761 0.055592]);
% c1=subs(c,[I1 I2 I3 I4 I5 I6 I7],[I11 I22 I33 I44 I55 I66 I77]);

%parametri del cerchio 
centro_x=0.39-0.2; %coordinata x del centro del cerchio
centro_y=0; %cordinata y del centro del cerchio
z0=0.4; %coordinata z del centro del cerchio
raggio=0.2; % raggio del cerchio

% Discretizzazione dell'angolo theta
omega = linspace(0,  2*pi, 100); %sostiuisco 2*pi con 0.01

%array salvare posizioni e tau
array_q1=zeros(1,101);
array_q2=zeros(1,101);
array_q3=zeros(1,101);
array_q4=zeros(1,101);
array_q5=zeros(1,101);
array_q6=zeros(1,101);
array_q7=zeros(1,101);
array_qdot1=zeros(1,101);
array_qdot2=zeros(1,101);
array_qdot3=zeros(1,101);
array_qdot4=zeros(1,101);
array_qdot5=zeros(1,101);
array_qdot6=zeros(1,101);
array_qdot7=zeros(1,101);
array_tau1=zeros(1,101);
array_tau2=zeros(1,101);
array_tau3=zeros(1,101);
array_tau4=zeros(1,101);
array_tau5=zeros(1,101);
array_tau6=zeros(1,101);
array_tau7=zeros(1,101);

%array posizione endeffecotor cartesiano
array_fx=zeros(1,101);
array_fy=zeros(1,101);
array_fz=zeros(1,101);

%condizioni iniziali 
array_q1(1)=0;
array_q2(1)=0;
array_q3(1)=0;
array_q4(1)=pi/2;
array_q5(1)=0;
array_q6(1)=0;
array_q7(1)=0;
array_qdot1(1)=0;
array_qdot2(1)=0;
array_qdot3(1)=0;
array_qdot4(1)=0;
array_qdot5(1)=0;
array_qdot6(1)=0;
array_qdot7(1)=0;

% Definizione del punto di partenza
punto_iniziale = [0.39, 0, 0.4];

% Definizione della direzione del movimento
delta_y = 0.001;

% Numero di punti sulla retta
num_punti = 100;

% Creazione dei punti sulla retta
x = punto_iniziale(1) * ones(1, num_punti);
y = punto_iniziale(2) + (0:(num_punti-1)) * delta_y;
z = punto_iniziale(3) * ones(1, num_punti);

xdot=0;
ydot=0.001;
zdot=0;
%derivata J
Jdot=diff(J,q1)*qdot1+diff(J,q2)*qdot2+diff(J,q3)*qdot3+diff(J,q4)*qdot4+diff(J,q5)*qdot5+diff(J,q6)*qdot6+diff(J,q7)*qdot7;
%save('saveVariables.mat', 'Jdot', '-append');
%simulazione robot
%traiettoria cercio o traiettoria retta
pd_cerchio=[centro_x+raggio*cos(omega);centro_y+raggio*sin(omega);z0 * ones(size(omega))];
pd=[x;y;z];
pdot=[xdot;ydot;zdot];
for i=1:100
    
    

    

    %dinamica del robot
    M2=M_num(array_q2(i), array_q3(i), array_q4(i) ,array_q5(i), array_q6(i) ,array_q7(i));
    g2=g_num(array_q1(i), array_q2(i), array_q3(i) ,array_q4(i), array_q5(i), array_q6(i), array_q7(i));
    c2=c_num(array_q2(i), array_q3(i), array_q4(i), array_q5(i), array_q6(i), array_q7(i),array_qdot1(i), array_qdot2(i), array_qdot3(i), array_qdot4(i), array_qdot5(i), array_qdot6(i), array_qdot7(i));

%     M2=double(subs(M1,[q1 q2 q3 q4 q5 q6 q7],[array_q1(i) array_q2(i) array_q3(i) array_q4(i) array_q5(i) array_q6(i) array_q7(i)]));
%     g2=double(subs(g1,[q1 q2 q3 q4 q5 q6 q7],[array_q1(i) array_q2(i) array_q3(i) array_q4(i) array_q5(i) array_q6(i) array_q7(i)]));
%     c2=double(subs(c1,[q1 q2 q3 q4 q5 q6 q7 qdot1 qdot2 qdot3 qdot4 qdot5 qdot6 qdot7],[array_q1(i) array_q2(i) array_q3(i) array_q4(i) array_q5(i) array_q6(i) array_q7(i) array_qdot1(i) array_qdot2(i) array_qdot3(i) array_qdot4(i) array_qdot5(i) array_qdot6(i) array_qdot7(i)]));
    
    %calcolo tau
    q=[array_q1(i); array_q2(i); array_q3(i); array_q4(i); array_q5(i); array_q6(i); array_q7(i)];
    qdot=[array_qdot1(i); array_qdot2(i); array_qdot3(i); array_qdot4(i); array_qdot5(i); array_qdot6(i); array_qdot7(i)];
    f1=double(subs(f,[q1 q2 q3 q4 q5 q6 q7 d1 d2],[array_q1(i) array_q2(i) array_q3(i) array_q4(i) array_q5(i) array_q6(i) array_q7(i) 0.4 0.39]));
    J1=double(subs(J,[q1 q2 q3 q4 q5 q6 q7 qdot1 qdot2 qdot3 qdot4 qdot5 qdot6 qdot7 d1 d2],[array_q1(i) array_q2(i) array_q3(i) array_q4(i) array_q5(i) array_q6(i) array_q7(i) array_qdot1(i) array_qdot2(i) array_qdot3(i) array_qdot4(i) array_qdot5(i) array_qdot6(i) array_qdot7(i)  0.4 0.39]));
    Jdot1=double(subs(Jdot,[q1 q2 q3 q4 q5 q6 q7 qdot1 qdot2 qdot3 qdot4 qdot5 qdot6 qdot7 d1 d2],[array_q1(i) array_q2(i) array_q3(i) array_q4(i) array_q5(i) array_q6(i) array_q7(i) array_qdot1(i) array_qdot2(i) array_qdot3(i) array_qdot4(i) array_qdot5(i) array_qdot6(i) array_qdot7(i)  0.4 0.39]));
  
    
    %prendo posizioni f
    array_fx(i)=f1(1);
    array_fy(i)=f1(2);
    array_fz(i)=f1(3);
    
    %formula tau
    Kp=0.1;
    ka=0.1;
    kv=1;
    %derivate 
    %a=pinv(J1)*(Kp*(pdot-J1*qdot)-Jdot1*qdot)-(eye(7,7)-pinv(J1)*J1)*0.01*g2;
    %giusto
    a=pinv(J1)*(Kp*(pd_cerchio(1:3,i)-f1)-ka*J1*qdot-Jdot1*qdot)-(eye(7,7)-pinv(J1)*J1)*(0.01*g2+kv*qdot);
    %kp ka
    %a=pinv(J1)*(Kp*(pd(1:3,i)-f1)-ka*J1*qdot-Jdot1*qdot)-(eye(7,7)-pinv(J1)*J1)*0.01*g2;
    %a=pinv(J1)*(Kp*(pd_cerchio(1:3,i)-f1)-Jdot1*qdot)-(eye(7,7)-pinv(J1)*J1)*0.01*g2;
    tau=M2*a+c2+g2;
    
    %salvo tau 
    array_tau1(i)=tau(1);
    array_tau2(i)=tau(2);
    array_tau3(i)=tau(3);
    array_tau4(i)=tau(4);
    array_tau5(i)=tau(5);
    array_tau6(i)=tau(6);
    array_tau7(i)=tau(7);
    

    [t, p]=ode45(@(t,y)sistema(t,y,tau,M2,c2,g2),[i i+1],[q;qdot]);
    %ode45 passare dinamica manipolatore con tau rispettivi

    array_q1(i+1)=p(end,1);
    array_q2(i+1)=p(end,2);
    array_q3(i+1)=p(end,3);
    array_q4(i+1)=p(end,4);
    array_q5(i+1)=p(end,5);
    array_q6(i+1)=p(end,6);
    array_q7(i+1)=p(end,7);
    array_qdot1(i+1)=p(end,8);
    array_qdot2(i+1)=p(end,9);
    array_qdot3(i+1)=p(end,10);
    array_qdot4(i+1)=p(end,11);
    array_qdot5(i+1)=p(end,12);
    array_qdot6(i+1)=p(end,13);
    array_qdot7(i+1)=p(end,14);

end
%save('saveTorque.mat', 'array_tau1 array_tau2 array_tau3 array_tau4 array_tau5', 'save');
figure;
plot3(pd_cerchio(1,1:100), pd_cerchio(2, 1:100), pd_cerchio(3, 1:100), 'b', 'LineWidth', 2);
hold on 
plot3(array_fx(1:100), array_fy(1:100), array_fz(1:100), 'r', 'LineWidth', 2);
for i = 1:100
        text(array_fx(i), array_fy(i),array_fz(i), num2str(i), 'FontSize', 8, 'Color', 'k');
        text(pd_cerchio(1,i), pd_cerchio(2,i),pd_cerchio(3,i), num2str(i), 'FontSize', 8, 'Color', 'g');
end

grid on;
axis equal;
xlabel('X');
ylabel('Y');
zlabel('Z');
% limiti_asse=[-2 2];
% axis([[-2 2] [-10 2] [-2 2]]);
title('Cerchio nel piano XY');


function dp=sistema(t,y,tau,M2,c2,g2) 
y1=y(1:7);
y1d=y(8:14);
y1dd=pinv(M2)*(tau-c2-g2);
dp=[y1d; y1dd];
end
