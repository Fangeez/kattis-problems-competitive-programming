#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
  int num1, num2, num3;
  vector<char> letter = {'A', 'B', 'C'};
  vector<int> nums;
  string order;
  unordered_map <char, int> key;

  cin>>num1>>num2>>num3;
  cin>>order;
  nums.push_back(num1);
  nums.push_back(num2);
  nums.push_back(num3);
  sort(nums.begin(), nums.end());
  key.insert({'A', nums[0]});
  key.insert({'B', nums[1]});
  key.insert({'C', nums[2]});

  for(auto c: order){
    cout<<key.at(c)<<" ";
  }
  
  return 0;
}
