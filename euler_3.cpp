#include <iostream>
#include <cmath>
using namespace std;

long long largestPrimeFactor(long long n) {
    long long largest = -1;

    // Remove factors of 2
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    // Check odd factors from 3 to sqrt(n)
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    // If n is still greater than 1, it is a prime number
    if (n > 1) largest = n;

    return largest;
}

int main() {
    long long n;
    cin >> n;

    cout << largestPrimeFactor(n) << endl;
    return 0;
}
