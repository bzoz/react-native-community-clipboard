#include "pch.h"
#include "RNWindowsClipboard.h"

static std::string string_test = "A test string";

std::string RNWindowsClipboard::RNCClipboard::getString() noexcept {
  return string_test;
}

void RNWindowsClipboard::RNCClipboard::setString(std::string text) noexcept {
  string_test = text;
}
