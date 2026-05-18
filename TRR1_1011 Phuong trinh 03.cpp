#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Phuong trinh ax^4 + bx^2 + c = 0 co it nhat mot nghiem thuc
 * Motif: Dat y = x^2 (y >= 0), giai phuong trinh bac hai theo y
 */

double a, b, c;

int main() {
    if (cin >> a >> b >> c) {
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    // Vo so nghiem x, co nghiem thuc
                    cout << 1 << endl;
                } else {
                    // Vo nghiem
                    cout << 0 << endl;
                }
            } else {
                // Phuong trinh bac hai theo x: bx^2 + c = 0 -> x^2 = -c/b
                double y = -c / b;
                if (y >= 0) cout << 1 << endl;
                else cout << 0 << endl;
            }
        } else {
            double delta = b * b - 4 * a * c;
            if (delta < 0) {
                cout << 0 << endl;
            } else {
                double y1 = (-b + sqrt(delta)) / (2 * a);
                double y2 = (-b - sqrt(delta)) / (2 * a);
                // Chi can mot trong hai nghiem y >= 0 thi se co x thuc (x = sqrt(y))
                if (y1 >= 0 || y2 >= 0) cout << 1 << endl;
                else cout << 0 << endl;
            }
        }
    }
    return 0;
}
