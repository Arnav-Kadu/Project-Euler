#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int sum(int n) {
    int sum = 1;
    int bound = (int) sqrt(n);
    for (int i = 2; i <= bound; i++) {
        if (n % i == 0) {
            sum += i; 
            if (i != n / i) { 
                sum += n / i; 
            }
        }
    }
    return sum;
}

void solve() {
    // Calculate sum of all abundant numbers
    vector<int> put;
    for (int i = 12; i <= 28123; i++) { 
        if (sum(i) > i) {
            put.push_back(i);
        }
    }

    set<int> s;
    int n = put.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sumOfAbundant = put[i] + put[j];
            
                s.insert(sumOfAbundant);
            
        }
    }
    int result = 0;
    for (int i = 1; i <= 28123; i++) {
        if (s.count(i)) {
            continue;
        }result += i;
    }

    cout << result << endl;
}

int main() {
    solve();
    return 0;
}
