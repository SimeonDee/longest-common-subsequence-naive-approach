//Group 3 LCS Naive Implementation in C++
#include<iostream>
#include<string>
using namespace std;
int N, M;
string S, T;
int calc(int n, int m) {
    if (n == N || m == M)
        return 0;
    if (S[n] == T[m]) {
        return calc(n+1, m+1) + 1;
    }
    else {
        return max(calc(n+1, m), calc(n, m+1));
    }
}

void solve() {
    int res = calc(0, 0);
    cout << "The Length of the LCS is " << res << " characters" << endl;
}

int main(){
    cout << "n: "; cin >> N;
    cout << "m: "; cin >> M;
    cout << "s: "; cin >> S;
    cout << "t: "; cin >> T;
    solve();
    return 0;
}
