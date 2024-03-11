#include <iostream>
using namespace std;
int main() {
    int n,i, mul=1;
    cin >> n;
    for(i=1; i<=10; i++){
        mul*=i;
        if(mul>=n) break;
    }
    cout << i;
    return 0;
}