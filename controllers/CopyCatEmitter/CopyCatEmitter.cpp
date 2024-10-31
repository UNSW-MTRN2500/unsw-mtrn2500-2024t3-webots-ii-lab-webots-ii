#include "CopyCatE.hpp"

int main(int argc, char** argv) {
  CopyCatE robot;
  double timeStep{robot.getBasicTimeStep()};
  while (robot.step(timeStep) != -1) {
    char command{robot.getCommand()};
    switch (command) {
      case 'W':
        robot.moveForward();
        break;
      case 'A':
        robot.turnLeft();
        break;
      case 'S':
        robot.moveBackward();
        break;
      case 'D':
        robot.turnRight();
        break;
      case ' ':
        robot.halt();
        break;
    }
  };

  return 0;
}
