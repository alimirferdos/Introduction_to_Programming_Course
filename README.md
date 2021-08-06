# Introduction to Computer Programming Course

This repository includes some of the solutions to assignments of a course I took in 2016 named "Introduction to computer programming" in C++.

I will list the solutions and give a brief description about them in this README file:

## 2D Rotation
Rotating a vector point with (x,y) coordinates by theta degrees. The formula for such a rotation is:

[x',y'] = [[cos(theta),-sin(theta)], [sin(theta), cos(theta)]] * [x, y]

*Note:* the above formula works for radian theta and we have to convert it from degrees to radians.

## Finding the angle between two given vertices 
We want to find the angle between two given vertices (x1,y1) and (x2,y2). 

There are several solutions to this problem but in this implementation, I've used the following:

theta=|theta_1-theta_2| = |arctan(v_1)-arctan(v_2)| 

## Solving a^x = b for x
The solution can be given by the following formula:

x = log(a^x , a) = log(b , a) = log(b , 2)/log(a , 2)

## Points' Colors
A number of points in a 2D space are given: (x,y,color).

We want to get the colors of the minimum and maximum points in terms of distance from origin.

## Finding the Error between e^x and its Taylor Series
This implementation inputs x, k and will output |e^x-taylor(i)| from i = 0 to i = k.

## Simple Text Processing: Word Counting
A string of words are given. We want to count the number of unique words in it.
