#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> res;
        for (int i=0;i<numbers.size()-1;++i){
            for (int j=i+1;j<numbers.size();++j){
                if (numbers[i]+numbers[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }    
        }
        return res;
    }
};

int main() {
  
  Solution p;
  vector<int> vec;
  vec.push_back(0);
  vec.push_back(5);
  vec.push_back(2);
  vec.push_back(7);
  vector<int> sol = p.twoSum(vec, 5);
  for(int i = 0; i < sol.size(); ++i) {
    cout << sol[i] << '\n';
  }
  return 0;
  
}
