#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Dem so luong xau nhi phan do dai n co chua k chu so 1 lien tiep
 * Motif: Su dung phuong phap loai tru (Total - Invalid)
 */

int n, k;
long long dp[55];

int main() {
    if (cin >> n >> k) {
        // Total strings
        long long total = (1LL << n);

        // dp[i] la so luong xau do dai i KHONG chua k chu so 1 lien tiep
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            if (i < k) {
                dp[i] = (1LL << i);
            } else if (i == k) {
                dp[i] = (1LL << k) - 1;
            } else {
                dp[i] = 0;
                for (int j = 1; j <= k; j++) {
                    dp[i] += dp[i - j];
                }
            }
        }

        // Result = Total - Invalid
        cout << total - dp[n] << endl;
    }
    return 0;
}
