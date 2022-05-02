#include "assignment/linear_search_iterative.hpp"

namespace assignment {

  std::optional<int> LinearSearchIterative::Search(const std::vector<int>& arr, int search_elem) const {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
      if (search_elem == arr[left]) {
        return left;
      }

      else if (search_elem == arr[right]) {
        return right;
      }
      else {
        left++;
        right--;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment