/* Copyright (c) 2019 Stanislaw Halik <sthalik@misaki.pl>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 */

#pragma once

#include "video/video-widget.hpp"
#include <opencv2/core.hpp>

struct cv_video_widget final : video_widget
{
    cv_video_widget(QWidget* parent = nullptr);
    void update_image(const cv::Mat& frame);

private:
    cv::Mat frame2, frame3;
};
