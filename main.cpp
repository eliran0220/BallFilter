#include <iostream>
#include "Image.hpp"
#include "BallFilter.hpp"

/****************************
 * The main class, the image is generated here given the constants
 * and then running the filtering algorithm.
 * The memory is freed via ballFilter object.
 ***************************/
int main() {
    auto *img = new Image();
    auto *sphere = new Sphere();
    auto *inside = new Pixel(inside_r, inside_g, inside_b);
    auto *outside = new Pixel(outside_r, outside_g, outside_b);
    auto *ballFilter = new BallFilter(img, sphere, inside, outside);
    ballFilter->filter();
    delete (ballFilter);
    return 0;
}

