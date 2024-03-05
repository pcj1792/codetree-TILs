#include <iostream>
using namespace std;
int main() {
    int a,n,i;
    cin >> a >> n;
    for(i=1; i<=n; i++){
        a+=n;
        cout << a << endl;
    }
    return 0;
}