#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Liet ke t xau nhi phan ke tiep theo thu tu tu dien
 * Motif: Theo mau sinh_nhi_phan.cpp, thuc hien lap t lan
 */

int n, t, a[105];

void result() {
  for (int i = 1; i <= n; i++) {
    cout << a[i] << (i == n ? "" : " ");
  }
  cout << "\n";
}

bool next_binary_string() {
  // Tim index i lon nhat tu phai sang trai co gia tri 0
  int i = n;
  while (i > 0 && a[i] == 1) {
    a[i] = 0;
    i--;
  }

  // Day la xau cuoi cung (toan 1)
  if (i == 0)
    return false;

  // Gan a[i] = 1
  a[i] = 1;

  return true;
}

int main() {
  if (cin >> n >> t) {
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int count = 1; count <= t; count++) {
      if (next_binary_string()) {
        result();
      } else {
        // Khong tim duoc xau ke tiep
        cout << 0 << "\n";
        break;
      }
    }
  }
  return 0;
}
