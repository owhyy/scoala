#include <bits/stdc++.h>
using namespace std;
int suma(int x, int y) { return x + y; }

int main() {
    clock_t start, end;
    start = clock();
    int n = 136;
    int a = n, b = n % 10;
    while (a >= 10) a /= 10;
    cout << b << " " << a << endl;

    if (a == b)
        cout << "Este numar echilibrat" << endl;
    else
        cout << "Nu este numar echilibrat" << endl;

    cout << suma(3, 4);
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\nTime taken : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
