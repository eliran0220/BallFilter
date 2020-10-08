//
// Created by eliran on 10/6/20.
//

#include <cmath>
#include "Sphere.hpp"
#include "Constants.hpp"
Sphere::Sphere() {
    centroid = new Pixel(centroid_r,centroid_g,centoid_b);
    this->radius = sqrt(pow(centroid->getRed(),2) + pow(centroid->getGreen(),2) + pow(centroid->getBlue(),2));
}

Pixel *Sphere::getCentroid() const {
    return centroid;
}

double Sphere::getRadius() const {
    return radius;
}

Sphere::~Sphere() {
    delete(centroid);
}
