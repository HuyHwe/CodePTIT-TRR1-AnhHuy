#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke hoan vi lien ke truoc cua hoan vi cho truoc
 * Motif: Su dung std::prev_permutation de tim hoan vi truoc
 */

int n, a[10005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while (cin >> n) {
        for (int i = 1; i <= n; i++) cin >> a[i];
        
        if (prev_permutation(a + 1, a + n + 1)) {
            for (int i = 1; i <= n; i++) {
                cout << a[i] << (i == n ? "" : " ");
            }
            cout << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}

