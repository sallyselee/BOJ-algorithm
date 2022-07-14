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

        else if (n == 4) {
            cout << 2 << endl << 2 << endl;
            n /= 4;
        }

        else if (n == 3) {
            cout << 3 << endl;
            n /= 3;
        }

        else if (n == 2) {
            cout << 2 << endl;
            n /= 2;
        }
        
        else {
            int nIsNotPrime = 0;

            for (int i = 2; i <= (int)sqrt(n); i++) {
                int iIsPrime = 0;
                for (int j = 1; j <= i; j++) {
                    if (i % j == 0) {
                        iIsPrime++;
                    }
                }
                if (iIsPrime == 2) {     // If i is a Prime Number, iIsPrime == 2
                    if (n % i == 0) {
                        cout << i << endl;
                        n /= i;
                        nIsNotPrime++;
                        break;
                    }
                }
            }

            if (nIsNotPrime == 0) {
                cout << n << endl;
                n /= n;
            }
        }
    }

    return 0;
}