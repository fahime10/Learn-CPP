/*
 * Rectangle.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Rectangle.h"

using std::string;

Rectangle::Rectangle(float width, float height, const string& borderColor, bool fill, const string& fillColor)
    : Shape(borderColor, fill, fillColor) {
	width_ = width;
    height_ = height;
}

float Rectangle::width() const {
	return width_;
}

float Rectangle::height() const {
	return height_;
}

void Rectangle::setWidth(float width) {
	width_ = width;
}

void Rectangle::setHeight(float height) {
	height_ = height;
}

float Rectangle::area() const {
    return width_ * height_;
}

float Rectangle::perimeter() const {
    return width_ * 2 + height_ * 2;
};

