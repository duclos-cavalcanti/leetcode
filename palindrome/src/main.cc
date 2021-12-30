#include <iostream>
#include <vector>
#include <stack>
#include <string>

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    } else if (x == 0) {
      return true;
    } else {
      std::stack<char> st;
      std::string str = std::to_string(x);

      int lim;
      int total = str.length();
      int half = total / 2;


      lim = total % 2 == 0 ? half : half + 1;

      for (int i = 0; i < half; i++) {
        st.push(str[i]);
      }

      for (int i = lim ; i < total; i++) {
        char c = st.top();
        st.pop();
        if (c != str[i]) // not palindrome
          return false;
      }
      return true;
    }
  }
};

int main() {
  Solution sol;

  // input
  std::vector<int> vec = {10, 101, 1000, 1001, -127, 0, 10301, 10510};

  for (int i = 0; i < vec.size(); i++) {
    std::cout << "Number: " << vec.at(i) << std::endl;
    if (sol.isPalindrome(vec.at(i)))
      std::cout << "is a palindrome!" << std::endl;
    else
      std::cout << "is NOT a palindrome!" << std::endl;
  }

  return 0;
}
