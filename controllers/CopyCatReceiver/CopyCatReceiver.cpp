#include "CopyCatR.hpp"

int main(int argc, char** argv) {
  CopyCatR robot;
  double timeStep{robot.getBasicTimeStep()};
  while (robot.step(timeStep) != -1) {
    char command{robot.getCommand()};
    switch (command) {
      case 'W':
        robot.moveBackward();
        break;
      case 'A':
        robot.turnRight();
        break;
      case 'S':
        robot.moveForward();
        break;
      case 'D':
        robot.turnLeft();
        break;
      case ' ':
        robot.halt();
        break;
    }
  };

  return 0;
}
