/**
 * @copyright (c) 2020 Daisuke Hashimoto
 * @brief 各種ユーティリティー
 */

#ifndef SRC_UTILS_H_
#define SRC_UTILS_H_

#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace utils {

std::vector<std::string> SplitStringToVector(const std::string &text, const char delimiter);

std::vector<float> SplitStringToFloatVector(const std::string &text, const char delimiter);

std::vector<double> SplitStringToDoubleVector(const std::string &text, const char delimiter);

int64_t CalculatePower(const int64_t x, const int64_t n) noexcept;

bool IsPrime(const int64_t N);

std::vector<std::pair<int64_t, int64_t>> FactorizeIntoPrimeFactors(const int64_t N);

}  // namespace utils
#endif  // SRC_UTILS_H_
