#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke hoan vi cua n so nguyen duong dau tien voi k vi tri co gia tri truoc
 * Motif: Theo mau quay_lui_hoan_vi.cpp, bo sung dieu kien vi tri da biet
 */

int n, k, a[25], fixed_val[25];
bool used[25], has_fixed[25];
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
        int v = fixed_val[m];
        if (!used[v]) {
            a[m] = v;
            used[v] = true;
            Try(m + 1);
            used[v] = false;
        }
        // Neu v da bi dung o vi tri khac truoc do thi se khong tim duoc hoan vi thoa man
    } else {
        // Thu cac gia tri tu 1 den n
        for (int v = 1; v <= n; v++) {
            if (!used[v]) {
                a[m] = v;
                used[v] = true;
                Try(m + 1);
                used[v] = false;
            }
        }
    }
}

int main() {
    if (cin >> n >> k) {
        memset(has_fixed, false, sizeof(has_fixed));
        memset(used, false, sizeof(used));
        
        for (int i = 1; i <= k; i++) {
            int pos, val;
            cin >> pos >> val;
            fixed_val[pos] = val;
            has_fixed[pos] = true;
        }
        
        Try(1);
        
        if (!found) {
            cout << 0 << endl;
        }
    }
    return 0;
}
