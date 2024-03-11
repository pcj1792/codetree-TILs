#include <iostream>
using namespace std;
int main() {
    int n, sum=0, cnt=0;
    double m;
    for(int i=1; i<=10; i++){
        cin >> n;
        if(n>=0 && n<=200){
            sum += n;
            cnt++;
            m = (double)sum/cnt;
        }
    }
    cout.precision(1);
    cout<<fixed << sum << " "<< m;
    return 0;
}