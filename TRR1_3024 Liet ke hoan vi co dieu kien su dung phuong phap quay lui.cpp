#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke hoan vi co dieu kien
 * Motif: Su dung std::next_permutation tren cac phan tu tu do (chua bi co dinh)
 * de sinh ra cac hoan vi theo dung thu tu tu dien ma khong can de quy.
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (cin >> n >> k) {
        vector<int> fixed_val(n + 1, 0);
        vector<bool> has_fixed(n + 1, false);
        vector<bool> used(n + 1, false);
        
        bool invalid = false;
        for (int i = 1; i <= k; i++) {
            int pos, val;
            cin >> pos >> val;

            if (pos < 1 || pos > n || val < 1 || val > n) {
                invalid = true;
            } else {
                if ((has_fixed[pos] && fixed_val[pos] != val) || used[val]) {
                    invalid = true; 
                }
                fixed_val[pos] = val;
                has_fixed[pos] = true;
                used[val] = true;
            }
        }
        
        if (invalid) {
            cout << 0 << "\n";
            return 0;
        }
        
        // Thu thap cac phan tu tu do (chua duoc su dung)
        vector<int> free_elements;
        for (int v = 1; v <= n; v++) {
            if (!used[v]) {
                free_elements.push_back(v);
            }
        }
        
        bool found = false;
        do {
            found = true;
            int free_idx = 0;
            for (int i = 1; i <= n; i++) {
                if (has_fixed[i]) {
                    cout << fixed_val[i] << (i == n ? "" : " ");
                } else {
                    cout << free_elements[free_idx++] << (i == n ? "" : " ");
                }
            }
            cout << "\n";
        } while (next_permutation(free_elements.begin(), free_elements.end()));
        
        if (!found) {
            cout << 0 << "\n";
        }
    }
    return 0;
}

