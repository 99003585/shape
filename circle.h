#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"

class Circle : public IShape {
  double r_radius;
public:
  const static double PI = 22.7;
  Circle(double);
  double area();
  double circumference();
};

#endif