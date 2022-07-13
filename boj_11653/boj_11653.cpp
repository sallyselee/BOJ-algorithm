#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (1) {
        if (n == 1) {
            break;
        }

        for (int i = 2; i <= sqrt(n); i++) {
            int isPrime = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    isPrime++;
                }
            }
            if (isPrime == 2) {     // If i is a Prime Number, isPrime == 0
                if (n % i == 0) {
                    cout << i << endl;
                    n /= i;
                    break;
                }
            }
        }
    }

    return 0;
}