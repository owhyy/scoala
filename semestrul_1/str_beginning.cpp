
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[15];
    cin.getline(text, 15);
    for(int i = 0; i<strlen(text); i++)
    {
        char text_up=toupper(text[i]);
        cout << text_up;
    }
}
