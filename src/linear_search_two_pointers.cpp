#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
      if (arr[left] == search_elem) {
        return left;
      }

      if (arr[right] == search_elem) {
        return right;
      }

      left++;
      right--;
    }

    return std::nullopt;
  }

}  // namespace assignment