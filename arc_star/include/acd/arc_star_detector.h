#ifndef ARC_STAR_DETECTOR_H
#define ARC_STAR_DETECTOR_H

#include <Eigen/Dense>

namespace acd { // Asynchronous Corner Detector

class ArcStarDetector
{
public:
  ArcStarDetector();
  ~ArcStarDetector();

  int getSensorWidth();
  int getSensorHeight();

  bool isCorner(double et, int ex, int ey, bool ep);

private:
  // Circular Breshenham Masks
  const int kSmallCircle_[16][2];
  const int kLargeCircle_[20][2];

  // Parameters
  constexpr static const double filter_threshold_ = 0.050;

  // Normal DVS
  static const int kSensorWidth_ = 240;
  static const int kSensorHeight_= 180;

  // DAVIS 346
  // static const int kSensorWidth_ = 346;
  // static const int kSensorHeight_= 260;

  // Surface of Active Events
  Eigen::MatrixXd sae_[2];
  Eigen::MatrixXd sae_latest_[2];
};

} // Asynchronous Corner Detector

#endif // ARC_STAR_DETECTOR_H
