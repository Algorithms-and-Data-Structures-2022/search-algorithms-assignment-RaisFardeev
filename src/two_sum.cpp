#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum) {
    int left = 0;
    int right = data.size() - 1;
    int curr;

    while (left <= right) {
      curr = data[left] + data[right];
      if (curr == sum) {
        return std::make_pair(left, right);
      }
      else if (curr > sum) {
        right--;
      }
      else {
        left++;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment