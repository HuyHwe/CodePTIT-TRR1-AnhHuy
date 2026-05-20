#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    if (!(cin >> n >> t)) return 0;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    bool het_hoan_vi = false;

    for (int i = 0; i < t; i++) {
        if (het_hoan_vi) {
            cout << 0 << "\n";
        } else {
            if (next_permutation(p.begin(), p.end())) {
                for (int j = 0; j < n; j++) {
                    cout << p[j] << (j == n - 1 ? "" : " ");
                }
                cout << "\n";
            } else {
                cout << 0 << "\n";
                het_hoan_vi = true;  
            }
        }
    }

    return 0;
}
