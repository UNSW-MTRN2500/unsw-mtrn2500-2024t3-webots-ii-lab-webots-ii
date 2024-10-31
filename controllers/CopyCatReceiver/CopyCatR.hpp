#pragma once

#include <webots/Receiver.hpp>

#include "CopyCatBase.hpp"

// TODO: Complete this class.
class CopyCatR : public CopyCatBase {
public:
  CopyCatR();

private:
  webots::Receiver* mReceiver;
};