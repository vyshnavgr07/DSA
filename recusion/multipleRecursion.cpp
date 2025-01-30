#include <bits/stdc++.h>
using namespace std;

int recur(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return recur(n - 1) + recur(n - 2);
}

int main() {
    int n = 5;
    cout << "Fibonacci of " << n << " is: " << recur(n) << endl;
    return 0;
}
