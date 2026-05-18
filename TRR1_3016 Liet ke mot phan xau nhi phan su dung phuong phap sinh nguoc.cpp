#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke t xau nhi phan ke tiep theo thu tu nguoc voi thu tu tu dien
 * Motif: Tuong tu sinh_nhi_phan.cpp nhung dao nguoc logic sang tim xau truoc
 */

int n, t, a[105];

void result() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

bool prev_binary_string() {
    // Tim index i lon nhat tu phai sang trai co gia tri 1
    int i = n;
    while (i > 0 && a[i] == 0) {
        a[i] = 1;
        i--;
    }
    
    // Day la xau dau tien (toan 0)
    if (i == 0) return false;
    
    // Gan a[i] = 0
    a[i] = 0;
    
    return true;
}

int main() {
    if (cin >> n >> t) {
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int count = 1; count <= t; count++) {
            if (prev_binary_string()) {
                result();
            } else {
                // Khong tim duoc xau ke tiep
                cout << 0 << "\n";
                break;
            }
        }
    }
    return 0;
}
