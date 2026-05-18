#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Phuong trinh ax + b = 0 co it nhat mot nghiem am
 * Motif: Su dung kieu double cho cac so thuc
 */

double a, b;

int main() {
    // Nhap du lieu tu tap tin hoac console
    if (cin >> a >> b) {
        if (a == 0) {
            if (b == 0) {
                // Vo so nghiem, chac chan co nghiem am
                cout << 1 << endl;
            } else {
                // Vo nghiem
                cout << 0 << endl;
            }
        } else {
            double x = -b / a;
            if (x < 0) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
