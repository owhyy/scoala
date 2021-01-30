#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string hAL = {"8 3 -5 42 0"};
    int n = hAL.length();
    int A[n ] = stoi(hAL);
    for (int i = 0; i < n; i++) cout << A[i] << " ";
}
