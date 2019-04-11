#include <string>

enum class V4L2Encoders {
    CAMERA_H264, OPENMAX, SOFTWARE
};

std::string raspberry_pipe(const int *height,
                           const int *framerate,
                           const int *rotation,
                           const bool *preview
);

std::string v4l2_pipe(const int *height,
                      const int *framerate,
                      const bool *openmax,
                      const std::string& device
);


std::string v4l2_pipe(const int *height, const int *framerate, V4L2Encoders encoder, const std::string& device);