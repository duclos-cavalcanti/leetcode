#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
  int removeDuplicates(std::vector<int>& nums) {
    int cur = -1;
    int last = cur;
    for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
      cur = *it;
      if (cur == last) {
        nums.erase(it);
        --it;
      }
      last = cur;
    }
    
    return nums.size();
  }
};

int main() {

  Solution sol;
  // Input
  std::vector <int> vec = {1, 1, 2};

  // Get Solution
  int num = sol.removeDuplicates(vec);

  std::cout << "Number " << num << " was the duplicate" << std::endl;

  // Display Output
  std::cout << "Output Vector: [ ";
  for (int i = 0; i < vec.size(); i++) {
    if (i == vec.size() - 1)
      std::cout << vec[i] << " ]" << std::endl;
    else
      std::cout << vec[i] << ", ";
  }

  return 0;
}
