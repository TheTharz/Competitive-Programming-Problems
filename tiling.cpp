#include <iostream>
#include <cstring>
using namespace std;
int main(){
  int n;
  cin >> n;

  int arr[8][n+1];
  memset(arr, 0, sizeof(arr));

  for(int i = 0; i < 8; i++){
    cout << arr[i][0] <<endl;
  }

  return 0;
}