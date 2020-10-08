//
// Created by eliran on 10/7/20.
//

#ifndef BALLFILTERTASK_BALLFILTER_HPP
#define BALLFILTERTASK_BALLFILTER_HPP


#include "Image.hpp"
#include "Sphere.hpp"
#include "cmath"

/**
 * BallFilter class: This class contains all the data given in the main
 * and runs the filtering algorithm on the image.
 */
class BallFilter {

private:
    Image *image;
    Sphere *sphere;
    Pixel *inside;
    Pixel *outside;

public:

    //Constructor
    BallFilter(Image *image, Sphere *sphere, Pixel *inside, Pixel *outside);

    //Getters
    Image *getImage() const;

    Sphere *getSphere() const;

    Pixel *getInside() const;

    Pixel *getOutside() const;

    /*
     * The filter algorithm which divides the image to 2 segments
     * The 1st segment - the pixels within the sphere
     * The 2nd segment - the pixels outside the sphere
     */
    void filter();

    //Destructor
    virtual ~BallFilter();

};


#endif //BALLFILTERTASK_BALLFILTER_HPP
