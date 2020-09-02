#include "pch.h"
#include "RNWindowsClipboard.h"

static std::string string_test = "Something";


void RNWindowsClipboard::RNCClipboard::getString(winrt::Microsoft::ReactNative::ReactPromise<winrt::Microsoft::ReactNative::JSValue> promise) noexcept {
  winrt::Microsoft::ReactNative::JSValue value;
  value = string_test;
  promise.Resolve(value);
}

void RNWindowsClipboard::RNCClipboard::setString(std::string text, winrt::Microsoft::ReactNative::ReactPromise<winrt::Microsoft::ReactNative::JSValue> promise) noexcept {
  string_test = text;
  winrt::Microsoft::ReactNative::JSValue value;
  promise.Resolve(value);
}
