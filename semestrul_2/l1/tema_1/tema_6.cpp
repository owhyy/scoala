#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string v[3] = {"zaab", "cnn", "xqac"};
    for (int i = 0; i < 2; i++)
        if (v[i] > v[i + 1]) swap(v[i], v[i + 1]);
    for (int i = 0; i < 3; i++) cout << v[i] << " ";
}
