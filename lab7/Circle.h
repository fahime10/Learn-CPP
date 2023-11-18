/*
 * Circle.h
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
#include "Shape.h"
using std::string;

// Circle inherits from Shape
// It adds the option to set and get the radius
class Circle : public Shape {
public:
	Circle(float radius, const string& borderColor, bool fill = false, const string& fillColor = "");
	Circle(const Circle&) = default;
	~Circle() = default;

	// Setter and getter for radius
	float radius() const;
	void setRadius(float radius);

    float area() const;
    float perimeter() const;

private:
	float radius_;
    float pi_ = 3.14159265358979323846;
};

#endif /* CIRCLE_H_ */
