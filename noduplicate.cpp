#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
  string line;
  string s;
  getline(cin, line);

  istringstream iss(line);
  bool flag = true;

  vector<string> words;

  while(iss >> s){
    words.push_back(s);
  }

  for(int i=0; i<words.size(); i++){
    for(int j=i+1; j<words.size(); j++){
      if(words[j]==words[i]){
        cout << "no" << endl;
        return 0;
      }
  }
  }

  cout << "yes" << endl;

  return 0;
}