%Matlab

[x,y] = ginput(n);
%takes coordinates from matlab n  any number

% If want more number of digits 

type
format long

% Less numbers
format short



# Class Example
    %Create a class named payment, placed in file 'payment.m'
    classdef payment
        properties
            rate;
            term;
            principle;
        end
        methods
            function obj = payment(r,t,p)
                obj.rate = r;
                obj.term = t;
                obj.principle = p;
            end
            function disp(obj)
                i = obj.rate/(12*100);
                payAmt = (obj.principle * i)/(1 - (1+i)^(-obj.term));
                s = sprintf('%s%.2f%s%4.2f%s%.2f%s%d%s',...
                    'Payment per month on a loan of $', obj.principle,...
                    ' at an annual interest rate of ', obj.rate,...
                    '% is $', payAmt, ' for ', obj.term, ' months.');
                disp(s);
            end
        end
    end




#new techniq to print
s = sprintf('%s%.2f%s%4.2f%s%.2f%s%d%s',...
                    'Payment per month on a loan of $', obj.principle,...
                    ' at an annual interest rate of ', obj.rate,...
                    '% is $', payAmt, ' for ', obj.term, ' months.');

 disp(s);



##
S = shaperead(filename);
mapshow(S);


##
webcam % Initilize webcam
webcamlist % Show webcam list
camObj = webcam; preview(camObj);  % Show webcam or display webcam vdo
camObj = webcam; img = snapshot(camObj); % Just take Snapshot from webCam