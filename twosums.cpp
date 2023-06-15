#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    int target;
    std::cin >> target;

    map <int, int> map;

    for (int i = 0; i < n; i++){
        int t;
        std::cin >> t;
        auto node =map.find(target-t);

        if(node==map.end()){
            //not found
            map[t] = i;
        }else{
            //found
            std::cout << node->second << " " << i << endl;
            return 0;
        }
        map[t] = i;

    }


    return 0;
}