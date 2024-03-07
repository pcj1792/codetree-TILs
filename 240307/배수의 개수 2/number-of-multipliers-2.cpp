#include <iostream>
using namespace std;
int main() {
    int n, i,cnt=0;
    for(i=1; i<=10; i++){
        cin >> n;
        if(n%2!=0){
            cnt++;   
        }
    }
    cout << cnt;
    return 0;
}