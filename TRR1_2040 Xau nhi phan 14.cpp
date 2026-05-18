#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Dem so luong xau nhi phan do dai n co tong cac chu so bang s
 * Motif: Su dung cong thuc to hop C(n, s)
 */

int n, s;
long long C[55][55];

int main() {
    if (cin >> n >> s) {
        // Tinh bang to hop Pascal
        for (int i = 0; i <= n; i++) {
            C[i][0] = 1;
            for (int j = 1; j <= i; j++) {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }

        if (s > n || s < 0) cout << 0 << endl;
        else cout << C[n][s] << endl;
    }
    return 0;
}
