function j = get_j(block)
    setup(block);
end
    
%% Set up the block:
function setup(block)
% Register number of input and output ports
block.NumInputPorts  = 1;
block.NumOutputPorts = 1;

block.NumDialogPrms = 0;

block.InputPort(1).Dimensions = 7;  % 7 DOF robot configuration
block.InputPort(1).DatatypeID = 0;  % double
block.InputPort(1).Complexity = 'Real';
block.InputPort(1).DirectFeedthrough = true;

% Setup output port
block.OutputPort(1).Dimensions = [3, 7];
block.OutputPort(1).DatatypeID = 0; % double
block.OutputPort(1).Complexity = 'Real';
block.OutputPort(1).SamplingMode = 'Sample';

% Set block sample time
block.SampleTimes = [0 0];

% Register methods
block.RegBlockMethod('Outputs', @Outputs);
end


%% Set up the output:
function Outputs(block)
    q = block.InputPort(1).Data;

    global robot
    [r, j] = robot.get_jacobian(q);
    robot = r;
    j = double(j);
    
    block.OutputPort(1).Data = j;
end