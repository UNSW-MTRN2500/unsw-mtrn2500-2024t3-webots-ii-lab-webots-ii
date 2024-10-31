#pragma once

#include <webots/Motor.hpp>
#include <webots/Robot.hpp>

// TODO: Complete this class.
class CopyCatBase : public webots::Robot {
public:
  double maxMotorSpeed{6.28};

  CopyCatBase();
  void moveForward();
  void moveBackward();
  void turnLeft();
  void turnRight();
  void halt();
  virtual char getCommand() = 0;

private:
  webots::Motor* mLeftMotor;
  webots::Motor* mRightMotor;
};