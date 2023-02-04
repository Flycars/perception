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

#include <string>

#include "common/camera_frame.h"

namespace perception {

struct DetectorOption {
  std::string model_path;
};

class BaseDetector {
 public:
  virtual bool Init() = 0;

  virtual bool Detect(CameraFrame* frame) = 0;
};

}  // namespace perception
