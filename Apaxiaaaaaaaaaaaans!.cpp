#include <iostream>
#include <string>

using namespace std;

int main() {
  string name, compressedName;
  cin>>name;

  int nameLength = name.length();

  int i = 0;

  while(i < nameLength){
    char current = name[i];
    while(i + 1 < nameLength && name[i + 1] == current){
      i++;
    }
    if (i + 1 < nameLength) compressedName += name[i + 1];
    i++;
  }
  cout<<name[0]<<compressedName<<endl;
  return 0;
}
