#include <iostream>
using namespace std;
int main() {
    int a,b,m=1;

    cin >> a >> b;

    for(int i = 1; i<=b; i++){
        m*=a;   
    }
    cout << m;
    return 0;
}