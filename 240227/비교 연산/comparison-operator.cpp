#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >>b;
    int f = a>=b ? 1:0;
    int s = a>b ? 1:0;
    int t = a<=b ? 1:0;
    int r = a<b ? 1:0;
    int v = a==b ? 1:0;
    int x = a!=b ? 1:0;
    cout << f << endl << s << endl
    << t<<endl <<r<< endl << v<<endl <<x;
    // 여기에 코드를 작성해주세요.
    return 0;
}