## CSCI 2312: Programming Assignment 1

PA1 takes three 3-dimensional coordinates from the user and finds the area of the triangle formed by these points

The Point Class:

Members:
x, y, and z         //represent the x, y, and z coordinates of a point in 3d space

mutators:
setX(), setY(), and setZ()      //set the values of the x, y and z members

Accessors:
getX(), getY(), and getZ        //return values of private members

functions:
distanceTo()                    //finds the distance beteen two point objects

PA1.cpp

functions:
computeArea()                   //finds the area of a triangle formed by three points
main()                          //gets input from users and calls the computeArea function
