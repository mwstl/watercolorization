/*
 * watercolorization, based on project https://github.com/devin6011/ICGproject-watercolorization
 * Copyright (C) 2019 devin6011
 * Copyright (C) 2019 stratoes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once
#include <opencv2/opencv.hpp>
using namespace cv;

void segmentation_code(const Mat & img, Mat & segmentimg);
void abstraction(Mat & img, const Mat & segmentimg, const Mat & saliencyDistanceField);