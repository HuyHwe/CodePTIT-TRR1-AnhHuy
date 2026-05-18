#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Tim so luong t lon nhat cac hinh vuong canh nguyen khac nhau tu n o vuong
 * Motif: Su dung vong lap de tim tong binh phuong nho hon hoac bang n
 */

long long n;

int main() {
    if (cin >> n) {
        long long t = 0;
        long long sum_area = 0;

        // Cac hinh vuong co canh khac nhau: 1, 2, 3, ..., t
        // Tong dien tich: 1^2 + 2^2 + ... + t^2
        while (true) {
            long long next_side = t + 1;
            long long next_area = next_side * next_side;
            if (sum_area + next_area <= n) {
                sum_area += next_area;
                t++;
            } else {
                break;
            }
        }

        cout << t << endl;
    }
    return 0;
}
