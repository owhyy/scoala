#include <iostream>
#include <string>
using namespace std;

bool eNumar(string str) {
    if (isdigit(str[0]) == true) return true;
    return false;
}
bool eSemn(string semn) {
    if (semn == "+" || semn == "-" || semn == "/" || semn == "*") return true;
    return false;
}

int main() {
    string str = "3-3";
    for (int i = 0; i < str.length(); i++)
        if (eNumar(str)) cout << " :;";
}
