#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace boost::multiprecision;
using namespace std;

cpp_int factorial(int n) {
    cpp_int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 100;
    cpp_int result = factorial(n);
    string check = result.str();
    int ans = 0;
    for (char c : check) {
        ans += (c - '0');
    }
    cout << ans << endl;
    return 0;
}
