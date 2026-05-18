#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Dem so luong xau nhi phan do dai n khong chua k chu so 0 lien tiep
 * Motif: Quy hoach dong (Dynamic Programming)
 */

int n, k;
long long dp[55];

int main() {
    if (cin >> n >> k) {
        // dp[i] la so luong xau hop le do dai i
        dp[0] = 1; // Xau rong

        for (int i = 1; i <= n; i++) {
            if (i < k) {
                // Neu i < k thi moi xau nhi phan do dai i deu khong co k chu so 0 lien tiep
                dp[i] = (1LL << i);
            } else if (i == k) {
                // Neu i == k thi chi co duy nhat xau gom k chu so 0 la khong hop le
                dp[i] = (1LL << k) - 1;
            } else {
                // Cong thuc truy hoi: dp[i] = dp[i-1] + dp[i-2] + ... + dp[i-k]
                // Giai thich: Xau hop le do dai i ket thuc bang:
                // 1 (dp[i-1] cach)
                // 10 (dp[i-2] cach)
                // 100 (dp[i-3] cach)
                // ...
                // 100...0 (k-1 so 0) (dp[i-k] cach)
                dp[i] = 0;
                for (int j = 1; j <= k; j++) {
                    dp[i] += dp[i - j];
                }
            }
        }

        cout << dp[n] << endl;
    }
    return 0;
}
