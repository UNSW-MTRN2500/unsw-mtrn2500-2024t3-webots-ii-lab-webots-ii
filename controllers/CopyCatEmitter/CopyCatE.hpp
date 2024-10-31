#pragma once

#include <string>

#include <webots/Emitter.hpp>
#include <webots/Keyboard.hpp>

#include "CopyCatBase.hpp"

// TODO: Complete this class.
class CopyCatE : public CopyCatBase {
public:
  CopyCatE();

private:
  const std::string validCommands{"WASD "};
  webots::Emitter* mEmitter;
  webots::Keyboard* mKeyboard;
};