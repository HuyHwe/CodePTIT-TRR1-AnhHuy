#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke to hop lien ke truoc cua to hop cho truoc
 * Motif: Theo mau sinh_to_hop.cpp, thay doi logic sang tim to hop truoc
 */

int n, k, a[105];

void result() {
    for (int i = 1; i <= k; i++) {
        cout << a[i] << (i == k ? "" : " ");
    }
    cout << endl;
}

bool prev_combination() {
    // 1. Tim index i lon nhat tu phai sang trai ma a[i] > a[i-1] + 1 (voi a[0] = 0)
    int i = k;
    a[0] = 0;
    while (i > 0 && a[i] == a[i - 1] + 1) i--;
    
    // Neu i == 0 thi day la to hop dau tien (1, 2, ..., k)
    if (i == 0) return false;
    
    // 2. Giam a[i] xuong 1 don vi
    a[i]--;
    
    // 3. Dat cac phan tu sau i thanh gia tri lon nhat co the
    for (int j = i + 1; j <= k; j++) {
        a[j] = n - k + j;
    }
    
    return true;
}

int main() {
    if (cin >> n >> k) {
        for (int i = 1; i <= k; i++) cin >> a[i];
        
        if (prev_combination()) {
            result();
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
