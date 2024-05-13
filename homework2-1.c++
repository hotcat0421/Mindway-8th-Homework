#include <iostream>
#include <map> 
#include <string>

using namespace std;

int main(){
  int n;
  int a;
  int maxNum = 0;
  string name;
  map<string, int> m;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> name; 
    m[name]++;
    maxNum = max(maxNum, m[name]);
  }

  for(auto iter : m){
    if(iter.second == maxNum){
      cout << iter.first;
      return 0;
    }
  }

  return 0;
}
