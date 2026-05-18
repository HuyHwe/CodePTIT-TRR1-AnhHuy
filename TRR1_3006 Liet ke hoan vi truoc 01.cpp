#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke hoan vi lien ke truoc cua hoan vi cho truoc
 * Motif: Theo mau sinh_hoan_vi.cpp, thay doi logic sang tim hoan vi truoc
 */

int n, a[10005];

void result() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << endl;
}

bool prev_permutation() {
    // 1. Tim i lon nhat sao cho a[i] > a[i+1]
    int i = n - 1;
    while (i > 0 && a[i] < a[i + 1]) i--;
    
    // Neu i == 0 thi day la hoan vi dau tien
    if (i == 0) return false;
    
    // 2. Tim j > i lon nhat sao cho a[j] < a[i]
    int j = n;
    while (a[j] > a[i]) j--;
    
    // 3. Swap a[i] va a[j]
    swap(a[i], a[j]);
    
    // 4. Lat nguoc doan tu i+1 den n
    int l = i + 1, r = n;
    while (l < r) {
        swap(a[l], a[r]);
        l++; r--;
    }
    
    return true;
}

int main() {
    while (cin >> n) {
        for (int i = 1; i <= n; i++) cin >> a[i];
        
        if (prev_permutation()) {
            result();
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
