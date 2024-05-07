The provided C++ program calculates the area under the curve y = x^2 from 0 to a user-defined upper limit using a numerical integration method. 
It divides the interval [0,Upper limit] into a certain number of divisions, calculates the area of rectangles under the curve for each division, and sums these areas to approximate the total area under the curve.
The actual area under the curve from 0 to the upper limit for the function y = x^2  is given by the integral x^3/3 evaluated from 0 to the upper limit.
The program iteratively increases the number of divisions until the error between the calculated area and the actual area is less than or equal to 1 % .
