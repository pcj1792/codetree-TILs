#include <iostream>
using namespace std;
int main() {
    int n, cnt=1;
    cin >> n;
    for(int i =1; i<=n; i++){
        cnt++;
        n/=i;
        
        if(n/i<=1) {
            break;
        }
    }
    cout << cnt;
    return 0;
}