#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    vector<int> arr;
    string s;
    for(int i = 0; i <3; i++){
        int n;
        std::cin >> n;
        arr.push_back(n);
    }
    std::cin>>s;

    sort(arr.begin(), arr.end());

    map<char, int > m ;
    m['A'] = arr[0];
    m['B'] = arr[1];
    m['C'] = arr[2];

    std::cout << m[s[0]] << " " << m[s[1]] << " " << m[s[2]] << endl;
    
    return 0;
}