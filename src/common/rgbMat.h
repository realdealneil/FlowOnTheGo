/**
 * RGB (3 channel) 32-bit float image containers.
 */

#ifndef __RGB_MAT_H__
#define __RGB_MAT_H__

#include <iostream>
#include <chrono>

#include <opencv2/opencv.hpp>

class rgbMat {

  /**
   * rgbMat represents 2D RGB (3 channel) images as flat arrays of floats.
   */

  public:

    rgbMat(int height, int width);
    rgbMat(cv::Mat cvMat);
    ~rgbMat();

    int height;
    int width;

    cv::Mat toMat();

    const int channels = 3;
    const size_t elemSize = channels * sizeof(float);
    float* data;

};

#endif // end __RGB_MAT_H__


