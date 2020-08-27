#pragma once

#include "pch.h"

#include "NativeModules.h"

namespace RNWindowsClipboard {
  
  REACT_MODULE(RNCClipboard);

  struct RNCClipboard {
    REACT_METHOD(getString);
    std::string getString() noexcept;
    
    REACT_METHOD(setString);
    void setString(std::string text) noexcept;
  };

}
