#include <bits/stdc++.h>
using namespace std;
bool lasocanbangchanle(long long n, int N) {
    string s = to_string(n);
    if (s.length() != N) {
        return false;
    }
    int chan = 0, le = 0;
    for (char c : s) {
        int x = c - '0';
        if (x % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    } return chan == le; //true
    

}
void lietkesocanbnagchanle(int N) {
    long long start = pow(10, N - 1);
    long long end = pow(10, N);
    int count = 0;
    for (int i = start; i < end; i++) {
        if(lasocanbangchanle(i,N)) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }

        }
    } 

}
int main () {
    int N;
    cin >> N;
    lietkesocanbnagchanle(N);
    return 0;

}

