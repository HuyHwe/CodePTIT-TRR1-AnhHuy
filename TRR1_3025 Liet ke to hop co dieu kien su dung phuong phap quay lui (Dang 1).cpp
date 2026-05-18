#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke to hop chap k cua n phan tu voi phan tu dau tien la t
 * Motif: Theo mau quay_lui_to_hop.cpp, bo sung dieu kien phan tu dau tien
 */

int n, k, t, a[35];
bool found = false;

void result() {
    found = true;
    for (int i = 1; i <= k; i++) {
        cout << a[i] << (i == k ? "" : " ");
    }
    cout << "\n";
}

void Try(int i) {
    // Tim cac gia tri cho a[i] tu a[i-1] + 1 den n - k + i
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        // Dieu kien: phan tu dau tien (i=1) phai bang t
        if (i == 1 && j != t) continue;
        
        a[i] = j;
        if (i == k) result();
        else Try(i + 1);
    }
}

int main() {
    if (cin >> n >> k >> t) {
        a[0] = 0;
        Try(1);
        if (!found) {
            cout << 0 << endl;
        }
    }
    return 0;
}
