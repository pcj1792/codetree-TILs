#include <iostream>
using namespace std;
int main() {
    int a,n,sum=0;
    double avg, cnt;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        sum+=a;
        cnt++;
        avg=(double)sum/cnt;
    }
    cout.precision(1);
    cout << fixed << sum <<" "<<avg ;
    return 0;
}