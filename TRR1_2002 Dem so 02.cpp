#include <bits/stdc++.h>
using namespace std;

/**
 * Bai toan: Tim so luong cac so tu a den b la boi cua k hoac m
 * Motif: Su dung nguyen ly bao ham va loai tru (Inclusion-Exclusion Principle)
 */

long long a, b, k, m;

long long gcd(long long x, long long y) {
    while (y) {
        x %= y;
        swap(x, y);
    }
    return x;
}

long long lcm(long long x, long long y) {
    if (x == 0 || y == 0) return 0;
    return (x / gcd(x, y)) * y;
}

long long count_multiples(long long n, long long k, long long m) {
    if (n <= 0) return 0;
    long long count_k = n / k;
    long long count_m = n / m;
    long long count_lcm = n / lcm(k, m);
    return count_k + count_m - count_lcm;
}

int main() {
    if (cin >> a >> b >> k >> m) {
        // Ket qua la so luong boi trong doan [1, b] tru di so luong boi trong doan [1, a-1]
        long long result = count_multiples(b, k, m) - count_multiples(a - 1, k, m);
        cout << result << endl;
    }
    return 0;
}
