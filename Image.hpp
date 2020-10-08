//
// Created by eliran on 10/7/20.
//

#ifndef BALLFILTERTASK_IMAGE_HPP
#define BALLFILTERTASK_IMAGE_HPP


#include "Pixel.hpp"
#include "Constants.hpp"
#include <vector>

/**
 * Image class: This class holds a vector with all the RGB's , meaning the pixels
 * of the image
 * and runs the filterting algo on the image.
 */
class Image {
private:
    std::vector<Pixel *> data;
public:

    //Constructor
    Image();

    //Getter
    std::vector<Pixel *> &getData();

    //Destructor
    virtual ~Image();

};


#endif //BALLFILTERTASK_IMAGE_HPP
