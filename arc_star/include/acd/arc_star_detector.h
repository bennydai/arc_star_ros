#ifndef ARC_STAR_DETECTOR_H
#define ARC_STAR_DETECTOR_H

#include <Eigen/Dense>

namespace acd { // Asynchronous Corner Detector

class ArcStarDetector
{
public:
  ArcStarDetector();
  ~ArcStarDetector();

<<<<<<< HEAD
  int getSensorWidth();
  int getSensorHeight();

=======
>>>>>>> 0f00b7cffad228f6dc04d55cc6e164bb6b2259ed
  bool isCorner(double et, int ex, int ey, bool ep);

private:
  // Circular Breshenham Masks
  const int kSmallCircle_[16][2];
  const int kLargeCircle_[20][2];

  // Parameters
  constexpr static const double filter_threshold_ = 0.050;
<<<<<<< HEAD

  // Normal DVS
  static const int kSensorWidth_ = 240;
  static const int kSensorHeight_= 180;

  // DAVIS 346
  // static const int kSensorWidth_ = 346;
  // static const int kSensorHeight_= 260;

=======
  static const int kSensorWidth_ = 240;
  static const int kSensorHeight_= 180;

>>>>>>> 0f00b7cffad228f6dc04d55cc6e164bb6b2259ed
  // Surface of Active Events
  Eigen::MatrixXd sae_[2];
  Eigen::MatrixXd sae_latest_[2];
};

} // Asynchronous Corner Detector

#endif // ARC_STAR_DETECTOR_H
