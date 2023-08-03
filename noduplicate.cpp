#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(){
  string line;
  string s;
  getline(cin, line);

  istringstream iss(line);
  bool flag = true;


  //using two for loops and vectors
  /* vector<string> words;

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

  cout << "yes" << endl; */

  //using different data structure for improve the search

  //map
  /* unordered_map<string,int> words;
  while(iss>>s){
    if(words.find(s) != words.end()){
      cout << "no" << endl;
      return 0;
    }else{
      words[s] = 1;
    }
  }
  cout << "yes" << endl; */

  //set
  unordered_set<string> words;
  while(iss>>s){
    if(words.find(s) != words.end()){
      cout << "no" << endl;
      return 0;
    }else{
      words.insert(s);
    }
  }
  cout << "yes" << endl;
  return 0;
}