#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include "rectangle.hpp"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
	if (this->width == 0 || this->height == 0) {
		return 0;
	else {
		return (2 * this->width) + (2 * this->height);
	}
}

#endif 
