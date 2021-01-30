#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using namespace std;

int main()
{
    vector<int>::iterator it;
    string::iterator it2;
    vector<int>::const_iterator i3;
    string::const_iterator i4;
    vector<int> V{19, 1, 39};
    auto it1=V.cbegin();
    auto i2=V.cend();

    return 0;
}
