#include <iostream>
using namespace std;
int main() {
    int aa, ba;
    char s;
    cin >> aa >> s;
    cin >> ba >> s;
    cout << ((aa >= 19 || ba >= 19) || s=='M')? 1:0;

    return 0;
}