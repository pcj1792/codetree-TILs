#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a>> b >> c;
    if(a>=b &&  a>=c) cout << a;
    else if( a<=c && b<=c) cout << c;
    else cout << b;
    return 0;
}