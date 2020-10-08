//
// Created by eliran on 10/7/20.
//

#include "BallFilter.hpp"


BallFilter::~BallFilter() {
    delete (image);
    delete (sphere);
    delete (inside);
    delete (outside);
}

void BallFilter::filter() {
    double radius = sphere->getRadius();
    Pixel *centroid = sphere->getCentroid();
    std::vector<Pixel *> data = image->getData();
    //For each pixel, calculate the distance from the centroid
    for (Pixel *pixel : data) {
        double distance = sqrt(pow(centroid->getRed() - pixel->getRed(), 2) +
                               pow(centroid->getGreen() - pixel->getGreen(), 2) +
                               pow(centroid->getBlue() - pixel->getBlue(), 2));

        if (distance <= radius) {
            // inside the sphere, belongs to segment 1
            pixel->setColors(inside->getRed(), inside->getGreen(), inside->getBlue());
        } else {
            // outside the sphere, belongs to segment 2
            pixel->setColors(outside->getRed(), outside->getGreen(), outside->getBlue());
        }

    }
}

BallFilter::BallFilter(Image *image, Sphere *sphere, Pixel *inside, Pixel *outside) :
        image(image), sphere(sphere), inside(inside),
        outside(outside) {}

Image *BallFilter::getImage() const {
    return image;
}

Sphere *BallFilter::getSphere() const {
    return sphere;
}

Pixel *BallFilter::getInside() const {
    return inside;
}

Pixel *BallFilter::getOutside() const {
    return outside;
}



