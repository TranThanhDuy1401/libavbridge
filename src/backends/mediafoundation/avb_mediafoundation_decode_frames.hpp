#pragma once

#include "avbridge.h"

#ifdef _WIN32

#include <mfidl.h>
#include <vector>

// `buffer_height` is the row count the planar source is laid out with (the
// padded height), which is where its chroma starts; `height` is how many rows
// of picture to copy.
avb_result mf_decode_copy_cpu_frame(
    IMFSample *sample,
    int width,
    int height,
    int buffer_height,
    int source_stride,
    bool bottom_up,
    avb_pixel_format output_format,
    double pts_sec,
    std::vector<unsigned char> &storage,
    avb_video_frame &output);

#endif
