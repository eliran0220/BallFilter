//
// Created by eliran on 10/6/20.
//

#ifndef BALLFILTERTASK_SPHERE_HPP
#define BALLFILTERTASK_SPHERE_HPP

#include "Pixel.hpp"

/**
 * Sphere class: The sphere class contains the centroid and the radius.
 */
class Sphere {
private:
    Pixel *centroid;
    double radius;

public:

    //Constructor
    Sphere();

    //Getters
    Pixel *getCentroid() const;

    double getRadius() const;

    //Destructor
    virtual ~Sphere();
};


#endif //BALLFILTERTASK_SPHERE_HPP
