#include <iostream>
using namespace std;
int main() {
     int a, b, c ,s ,min;
     cin >> a >> b >> c;
    // if (a<=b && a<=c) cout <<1 <<" ";
    // else cout << 0<<" ";
    // if (a==b & a==c) cout<< 1<<" ";
    // else cout << 0<<" ";
    cout << (a<=b && a<=c ? 1 :0) <<" ";
    cout << (a==b && a==c ? 1 :0) <<" ";
    return 0;
}