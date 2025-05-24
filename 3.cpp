#include <iostream>
using namespace std;
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
long long sumOfFactorials(int N) {
    long long sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += factorial(i);
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    cout << sumOfFactorials(N) << endl;

    return 0;
}
