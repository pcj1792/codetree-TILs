#include <iostream>
using namespace std;
int main() {
    int n,cnt=0;
    while(true){
        cin >> n;
        if(n%2==1) continue;
        
        cout << n/2 <<endl;
        cnt++;

        if(cnt==3) break;
    }
    return 0;
}