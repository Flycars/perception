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

#include "detection/detector/object_detector.h"

namespace perception {

bool ObjectDetector::Init(const DetectorOption& option) {
  module_ = torch::jit::load(option.model_path);
  return true;
}

bool ObjectDetector::Detect(CameraFrame* frame) {
  std::vector<torch::jit::IValue> inputs;
  // Todo(daohu527): add image to input
  // inputs.push_back();

  at::Tensor output = module_.forward(inputs).toTensor();

  return true;
}

}  // namespace perception
