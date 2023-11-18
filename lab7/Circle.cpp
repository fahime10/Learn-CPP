/*
 * Circle.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Circle.h"
#include <cmath>
using std::string;

Circle::Circle(float radius, const string& borderColor, bool fill, const string& fillColor)
    : Shape(borderColor, fill, fillColor) {
	radius_ = radius;
    border_colour = borderColor;
    filled_ = fill;
    colour_ = fillColor;
}

float Circle::radius() const {
	return radius_;
}

void Circle::setRadius(float radius) {
	radius_ = radius;
}

float Circle::area() const {
    return pi_ * pow(radius_, 2);
}

float Circle::perimeter() const {
    return 2 * pi_ * radius_;
}

