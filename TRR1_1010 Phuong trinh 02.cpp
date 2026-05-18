#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Phuong trinh ax^2 + bx + c = 0 co it nhat mot nghiem duong
 * Motif: Su dung kieu double va tinh delta
 */

double a, b, c;

int main() {
    if (cin >> a >> b >> c) {
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    // Vo so nghiem, co nghiem duong
                    cout << 1 << endl;
                } else {
                    // Vo nghiem
                    cout << 0 << endl;
                }
            } else {
                // Phuong trinh bac nhat: bx + c = 0 -> x = -c/b
                double x = -c / b;
                if (x > 0) cout << 1 << endl;
                else cout << 0 << endl;
            }
        } else {
            double delta = b * b - 4 * a * c;
            if (delta < 0) {
                cout << 0 << endl;
            } else {
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);
                if (x1 > 0 || x2 > 0) cout << 1 << endl;
                else cout << 0 << endl;
            }
        }
    }
    return 0;
}
