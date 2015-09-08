//
// Created by Ivo Georgiev on 8/25/15.
//

#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

//prototypes
double computeArea(Point&, Point&, Point&);

int main(void) {
    double x,y,z;       //holds coordinates for x, y, and z axes
    cout << endl << "To find the area of a triangle we need three points with x, y, and z coordinates" << endl;
    Point point[3];
    //get coordinates and create point objects
    for(int i = 0; i <3; i++) {
        cout << endl << "Please enter the values for point " << i+1 << endl;
        cout << "\tx: ";
        cin >> x;
        cout << "\ty: ";
        cin >> y;
        cout << "\tz: ";
        cin >> z;
        point[i].setX(x);
        point[i].setY(y);
        point[i].setZ(z);
    }

    cout << endl << "The area of the triangle is: " << computeArea(point[0],point[1],point[2]) << endl;


    return 0;
}

//computes the area formed by the triangle formed by three points
double computeArea(Point& a, Point& b, Point& c){
    double s1, s2, s3;        //lengths of each side of triangle
    double s;                 //semiperimeter of triangle
    s1 = a.distanceTo(b);
    s2 = a.distanceTo(c);
    s3 = b.distanceTo(c);
    s = (s1 + s2 + s3)/2;
    double area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return area;
}
