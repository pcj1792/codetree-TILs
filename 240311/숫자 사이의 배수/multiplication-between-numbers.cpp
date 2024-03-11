#include <iostream>
using namespace std;
int main() {
    int a,b,sum=0;
    double m, cnt=0;
    cin >> a >> b;
    for(int i=a; i <=b; i++){
        if(i%5==0 || i%7==0){
            sum+=i;
            cnt++;
            m=sum/cnt;
        }
    }
    cout.precision(1);
    cout <<fixed << sum << " " << m;
    
    return 0;
}