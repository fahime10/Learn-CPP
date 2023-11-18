/*
 * Square.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Square.h"
using std::string;

Square::Square(float side, const string& borderColor, bool fill, const string& fillColor)
    : Rectangle(side, side, borderColor, fill, fillColor) {
	width_ = side;
    height_ = side;
}

void Square::setHeight(float height) {
    Rectangle::setHeight(height);
    Rectangle::setWidth(height);
}

void Square::setWidth(float width) {
    Rectangle::setWidth(width);
    Rectangle::setHeight(width);
}

float Square::perimeter() const {
    return width_ * 4;
}