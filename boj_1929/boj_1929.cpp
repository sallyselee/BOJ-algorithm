#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int inputM;
    int inputN;
    cin >> inputM >> inputN;

    const int m = inputM;
    const int n = inputN;

    if (n <= 1) {
        cout << "Check your input N" << endl;
        return 0;
    }

    int numRangeDivider = 2;

    for (int numBetween = m; numBetween <= n; numBetween++) {
        if (numBetween == 1) {
            continue;
        }

        else if (numBetween == 2 || numBetween == 3) {
            cout << numBetween << endl;
            continue;
        }

        int primeDiscriminator = 0;

        // If primeDiscriminator == 0 at the end of the for loop, the number is a prime.

        if ((int)sqrt(numBetween) > numRangeDivider) {
            numRangeDivider = (int)sqrt(numBetween);
        }

        for (int iterator = 2; iterator <= numRangeDivider; iterator++) {
            if (numBetween % iterator == 0) {
                primeDiscriminator++;
                break;
            }
        }

        if (primeDiscriminator == 0) {
            cout << numBetween << endl;
        }
    }

    return 0;
}