#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
      int middle = (left + right) / 2;
      if (arr[middle] == search_elem) {
        return middle;
      }
      else if (search_elem > arr[middle]) {
        left = middle + 1;
      }
      else {
        right = middle - 1;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment