#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m;
    int n;

    cin >> m >> n;

    vector<int> v;

    for (int i = m; i <= n; i++) {
        int isPrime = 1;
        if (i == 1) {
            continue;               // The case when input == 1 wasn't considered
        }
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                if (j != i) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime == 1) {
            v.push_back(i);
        }
    }
    
    if (v.empty()) {
        cout << -1 << endl;
    } else {
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        cout << sum << endl;
        cout << v.front() << endl;
    }

    return 0;
}
