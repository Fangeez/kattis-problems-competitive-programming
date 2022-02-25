#include <iostream>
#include <iomanip>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int testcases, numScores, score;
  vector<vector<int>> scores;
  cin>>testcases;

  for(int i = 0; i < testcases; i++) {
    cin >> numScores;
    vector<int> current;
    for(int i = 0; i < numScores; i++){
      cin>>score;
      current.push_back(score);
    }
    scores.push_back(current);
  }

  double average;
  for(vector<int> c: scores){
    average = (double)accumulate(c.begin(), c.end(), 0) / (double)c.size();
    double count = 0.0;
    for(auto score: c){
      if(score > average) count++;
    }
    cout<<fixed<<setprecision(3)<<round(count / (double)c.size() * 100.0 * 1000.0) / 1000.0<<"%"<<endl;
  }
  return 0;
}
