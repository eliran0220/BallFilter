//
// Created by eliran on 10/7/20.
//

#include "Image.hpp"

std::vector<Pixel *> &Image::getData() {
    return data;
}

Image::Image() {
    data.resize(ROWS * COLS);
    unsigned int r = 0, g = 1, b = 0;
    for (int rows = 0; rows < ROWS; rows++) {
        for (int cols = 0; cols < COLS; cols++) {
            data[rows + cols * ROWS] = new Pixel(r, g, b);
        }
        r += 1, g += 1, b += 1;
    }
}

Image::~Image() {
    for (Pixel *pixel : data)
        delete (pixel);
}


