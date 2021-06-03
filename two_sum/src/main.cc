#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            int cur = nums[i];
            for (int j = i + 1; j < size; j++) {
                if (cur + nums[j] == target) {
                    std::vector <int> sol;
                    sol.push_back(i);
                    sol.push_back(j);

                    return sol;
                }
            }
        }
        std::vector <int> dummy_sol;
        return dummy_sol;
    }
};

int main() {

  Solution sol;
  std::vector <int> vec = {2, 7, 11, 15};
  int target = 9;

  // Display Input
  std::cout << "Input Vector: [ ";
  for (int i = 0; i < vec.size(); i++) {
    if (i == vec.size() - 1)
      std::cout << vec[i] << " ]" << std::endl;
    else
      std::cout << vec[i] << ", ";
  }

  // Get Solution
  std::vector <int> ret = sol.twoSum(vec, target);

  // Display Output
  std::cout << "Output Vector: [ ";
  for (int i = 0; i < ret.size(); i++) {
    if (i == ret.size() - 1)
      std::cout << ret[i] << " ]" << std::endl;
    else
      std::cout << ret[i] << ", ";
  }
  

  return 0;
}
