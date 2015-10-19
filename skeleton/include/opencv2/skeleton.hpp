#ifndef __OPENCV_SKELETON_HPP__
#define __OPENCV_SKELETON_HPP__

#include "opencv2/core.hpp"

namespace cv
{

enum SkelMethods{
    Skel_GUOHALL    = 0, //!< see cv::erode
    Skel_ZHANGSUEN  = 1, //!< see cv::dilate
    SKel_NEEDMORE   = 2, //!< an opening operation
};

/** @brief Skeletonize a binary image.

The function skeletonizes a binary image using the median filter with the chosen thinning algorithm.

@param src input 1-channel binary image; the image depth can only be CV_8U.
@param dst destination array of the same size and type as src.
@param mode thinning algorithm type
@sa  argLengthNN
 */
CV_EXPORTS_W void skeletonize( InputArray src, OutputArray dst, int mode );

/** @brief Calculates a curve length for a skeleton branch.

The function computes a curve length for a skeleton branch.

@param skel Input vector of 2D points, stored in std::vector or Mat.
@param start Point represent the starting point of the branch.
@param end Point represent the ending point of the branch.
 */
CV_EXPORTS_W double branchLength( InputArray skel, Point start, Point end );

//! @endcond

//! @} imgproc_draw

//! @} imgproc

} // cv

#ifndef DISABLE_OPENCV_24_COMPATIBILITY
#include "opencv2/skeleton/skeleton_c.h"
#endif

#endif
