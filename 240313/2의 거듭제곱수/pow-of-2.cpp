#include <iostream>
using namespace std;
int main() {
    int n,cnt=0;
    cin >> n;
    while(n>1){
        int a=n/2;
        n=a;
        cnt++;
        
    }
    cout <<cnt;
    return 0;
}