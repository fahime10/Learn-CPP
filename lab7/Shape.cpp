/*
 * Shape.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Shape.h"
using std::string;

Shape::Shape(const string& borderColor, bool fill, const string& fillColor) {
	border_colour = borderColor;
    filled_ = fill;
    colour_ = fillColor;
}

string Shape::borderColor() const {
	return border_colour;
}

void Shape::setBorderColor(const string& color) {
	border_colour = color;
}

bool Shape::fill() const {
	return filled_;
}
void Shape::setFill(bool fill) {
	filled_ = fill;
}

string Shape::fillColor() const {
	return colour_;
}

void Shape::setFillColor(const std::string& color) {
	colour_ = color;
}

float Shape::area() const {
	// TODO: implement me or remove me
	return 0.0;
}

float Shape::perimeter() const {
	// TODO: implement me or remove me
	return 0.0;
}
