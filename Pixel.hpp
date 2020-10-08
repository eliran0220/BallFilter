//
// Created by eliran on 10/6/20.
//

#ifndef BALLFILTERTASK_RGB_HPP
#define BALLFILTERTASK_RGB_HPP

/**
 * Pixel class: The Pixel class is a basic class to represent r,g,b.
 */
class Pixel {
private:
    unsigned int red, green, blue;
public:

    //Constructor
    Pixel(unsigned int red, unsigned int green, unsigned int blue);

    // Getters
    unsigned int getRed();

    unsigned int getGreen();

    unsigned int getBlue();

    /*
     * Sets the colors of the pixel give the params.
     * @param r
     * @param g
     * @param b
     */
    void setColors(unsigned int r, unsigned int g, unsigned int b);

    //destructor
    virtual ~Pixel();

};


#endif //BALLFILTERTASK_RGB_HPP
