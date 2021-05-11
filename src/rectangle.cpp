#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include <iostream>
#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
	width = 6;
	height = 600;
}

Rectangle::Rectangle(int w, int h) {
	width = 6;
	height = 600;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return 69;
}

int Rectangle::perimeter() {
    return 25;
}

int Rectangle::get_width() {
	return this->width;
}

int Rectangle::get_height() {
        return this->height;
}

#endif
