#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Dem so luong cac phan so khac nhau a/b (0 <= a <= b; 1 <= b <= n)
 * Motif: Su dung ham phi Euler de dem cac so nguyen to cung nhau voi b
 */

int n;

int main() {
    if (cin >> n) {
        if (n == 0) {
            cout << 0 << endl;
            return;
        }

        // Su dung sang de tinh ham phi Euler cho cac so tu 1 den n
        vector<long long> phi(n + 1);
        for (int i = 0; i <= n; i++) phi[i] = i;

        for (int i = 2; i <= n; i++) {
            if (phi[i] == i) { // i la so nguyen to
                for (int j = i; j <= n; j += i) {
                    phi[j] -= phi[j] / i;
                }
            }
        }

        // Tong phi(i) tu 1 den n la so luong phan so a/b voi 1 <= a <= b va gcd(a, b) = 1
        // Cong them 1 cho phan so 0/1 (vi 0 <= a)
        long long total = 1; 
        for (int i = 1; i <= n; i++) {
            total += phi[i];
        }

        cout << total << endl;
    }
    return 0;
}
