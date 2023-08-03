#include <iostream>
using namespace std;
int main(){
  string cards[5];
  for(int i=0;i<5;i++){
    cin >> cards[i];
  }

  int strength = 1;

  for(int i=0;i<5;i++){
    int currentStrength = 1;
    for(int j=i+1;j<5;j++){
      if(cards[i][0] == cards[j][0]){
        currentStrength++;
      }
    }
    strength = max(currentStrength, strength);
    
  }

  cout << strength << endl;
}