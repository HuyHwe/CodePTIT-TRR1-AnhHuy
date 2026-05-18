#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke t hoan vi ke tiep cua hoan vi cho truoc
 * Motif: Theo mau sinh_hoan_vi.cpp, thuc hien lap t lan
 */

int n, t, a[105];

void result() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

bool next_permutation_func() {
    // 1. Tim index i lon nhat sao cho a[i] < a[i+1]
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1]) i--;
    
    // Day la hoan vi cuoi cung
    if (i == 0) return false;
    
    // 2. Tim j > i lon nhat sao cho a[j] > a[i]
    int j = n;
    while (a[j] < a[i]) j--;
    
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
    if (cin >> n >> t) {
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int count = 1; count <= t; count++) {
            if (next_permutation_func()) {
                result();
            } else {
                // Neu khong con hoan vi ke tiep thi ghi 0 va dung lai
                cout << 0 << "\n";
                break;
            }
        }
    }
    return 0;
}
