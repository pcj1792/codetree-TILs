#include <iostream>
using namespace std;
int main() {
    int a,b,f,s,t,r; 
    cin >> a>> b;
    f = a >= b ? 1:0;
    s = a > b ? 1:0;
    t = a <= b ? 1:0;
    r = a < b ? 1:0;
    cout << f <<endl << s << endl << t << endl << r;
    return 0;
}