#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke xau nhi phan do dai n voi k vi tri co gia tri truoc
 * Motif: Theo mau quay_lui_nhi_phan.cpp, bo sung dieu kien vi tri da biet
 */

int n, k, a[105], fixed_val[105];
bool has_fixed[105];
bool found = false;

void result() {
    found = true;
    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

void Try(int m) {
    if (m > n) {
        result();
        return;
    }
    
    // Neu vi tri m da co gia tri co dinh
    if (has_fixed[m]) {
        a[m] = fixed_val[m];
        Try(m + 1);
    } else {
        // Thu cac gia tri 0 va 1 theo thu tu tu dien
        for (int v = 0; v <= 1; v++) {
            a[m] = v;
            Try(m + 1);
        }
    }
}

int main() {
    if (cin >> n >> k) {
        memset(has_fixed, false, sizeof(has_fixed));
        
        for (int i = 1; i <= k; i++) {
            int pos, val;
            cin >> pos >> val;
            has_fixed[pos] = true;
            fixed_val[pos] = val;
        }
        
        Try(1);
        
        if (!found) {
            cout << 0 << endl;
        }
    }
    return 0;
}
