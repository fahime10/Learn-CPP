/*
 * Rectangle.h
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include "Shape.h"
using std::string;

// The rectangle class
// Serves also as base for Square
// Adds the functions height and width
// to those supported by Shape
class Rectangle : public Shape {
public:
    Rectangle()=default;
	Rectangle(float width, float height, const string& borderColor, bool fill = false, const string& fillColor = "");
	Rectangle(const Rectangle& other) = default;
	~Rectangle() = default;

	// Getters and setters for width and height
	float width() const;
	float height() const;

    virtual void setWidth(float width);

    virtual void setHeight(float height);

    float area() const;
    float perimeter() const;

protected:
	float height_;
    float width_;
};

#endif /* RECTANGLE_H_ */
