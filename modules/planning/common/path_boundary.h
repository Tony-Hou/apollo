/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 **/
#pragma once

#include <utility>
#include <vector>

namespace apollo {
namespace planning {

class PathBoundary {
 public:
  PathBoundary(const double start_s, const double delta_s,
      std::vector<std::pair<double, double>> path_boundary);
  virtual ~PathBoundary() = default;

  double start_s() const;

  double delta_s() const;

  const std::vector<std::pair<double, double>>& boundary() const;
 private:
  double start_s_;
  double delta_s_;
  std::vector<std::pair<double, double>> boundary_;
};

}  // namespace planning
}  // namespace apollo