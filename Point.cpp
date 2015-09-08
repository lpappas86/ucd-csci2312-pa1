#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

void Point::setZ(double newZ) {
  z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

double Point::getZ(){
  return z;
}

//computes the distance between this point and point p
double Point::distanceTo(Point& p) {
  double dx, dy, dz;
  dx = (x-p.getX())*(x-p.getX());
  dy = (y-p.getY())*(y-p.getY());
  dz = (z-p.getZ())*(z-p.getZ());
  return sqrt(dx + dy + dz);
}

