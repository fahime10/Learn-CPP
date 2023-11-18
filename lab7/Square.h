/*
 * Square.h
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
#include "Rectangle.h"
using std::string;

// Squre inherits from Rectangle
// Override the necessary functions
class Square : public Rectangle {
public:
	Square(float side, const string& borderColor, bool fill = false, const string& fillColor = "");
	Square(const Square& other) = default;
	~Square() = default;

    void setHeight(float height);
    void setWidth(float width);
    
    float perimeter() const;
};

#endif /* SQUARE_H_ */
