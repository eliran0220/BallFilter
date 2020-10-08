//
// Created by eliran on 10/6/20.
//

#include "Pixel.hpp"

Pixel::Pixel(unsigned int red, unsigned int green, unsigned int blue) : red(red), green(green), blue(blue) {}

unsigned int Pixel::getRed()  {
    return red;
}

unsigned int Pixel::getGreen()  {
    return green;
}

unsigned int Pixel::getBlue()  {
    return blue;
}

void Pixel::setColors(unsigned int r, unsigned int g, unsigned int b) {
    this->red = r;
    this->green = g;
    this->blue = b;
}

Pixel::~Pixel() = default;





