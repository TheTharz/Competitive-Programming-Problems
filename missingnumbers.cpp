#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    vector<int> m;
    int expected_number = 1;
    for (int num : r) {
        while (expected_number < num) {
            m.push_back(expected_number);
            expected_number++;
        }
        expected_number = num + 1;
    }

    if (m.empty()) {
        cout << "good job" << endl;
    } else {
        for (int missing_num : m) {
            cout << missing_num << endl;
        }
    }

    return 0;
}
