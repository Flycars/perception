// Copyright 2022 daohu527@gmail.com
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//  Author: daohu527

#pragma once

#include <torch/script.h>

#include "detection/interface/detector.h"

namespace perception {


class GarbageDetector : public BaseDetector {
 public:
  GarbageDetector() = default;
  virtual ~GarbageDetector() = default;

  bool Init(const DetectorOption& option) override;

  bool Detect(CameraFrame* frame) override;
 private:
  torch::jit::script::Module module_;
};

}  // namespace perception
