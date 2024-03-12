#include <iostream>
using namespace std;
int main() {
    int n, cnt=0;
    cin >> n;
    for(int i =1; i<=n; i++){
        cnt++;
        int a=n/=i;
        
        if(a<=1) {
            
            break;
        }
    }
    cnt++;
    cout << cnt;
    return 0;
}