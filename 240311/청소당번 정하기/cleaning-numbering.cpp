#include <iostream>
using namespace std;
int main() {
    int n, i, cnt2=0, cnt3=0, cnt12=0;
    cin >> n;
    for(i=1; i<=n; i++){
        if(i%12==0) cnt12++;
        else if(i%3==0)cnt3++;
        else if(i%2==0) cnt2++;
        
    }
    cout << cnt2 <<" "<< cnt3 << " " << cnt12;
    return 0;
}