#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Hop cua hai tap hop (Xau nhi phan)
 * Motif: Su dung mang toan cuc de luu tru phan tu tap hop
 */

int n;
int a[1005], b[1005], res[1005];

int main() {
    if (cin >> n) {
        // Nhap tap hop A
        for (int i = 1; i <= n; i++) cin >> a[i];
        // Nhap tap hop B
        for (int i = 1; i <= n; i++) cin >> b[i];
        
        int k = 0;
        // Hop cua hai tap hop A va B: phan tu thu i co mat neu a[i]=1 hoac b[i]=1
        for (int i = 1; i <= n; i++) {
            if (a[i] == 1 || b[i] == 1) {
                res[++k] = i; 
            }
        }

        // Ghi ket qua
        cout << k << endl;
        for (int i = 1; i <= k; i++) {
            cout << res[i] << (i == k ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
