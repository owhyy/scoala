#include <iostream>
using namespace std;
int main() {
    int masiv[5] = {13, 1, 20, 4, 9};
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (-1 * masiv[j] > -1 * masiv[j + 1]) swap(masiv[j], masiv[j + 1]);
    for (int i = 0; i < 5; i++) cout << -1 * masiv[i] << " ";
}
// 2
