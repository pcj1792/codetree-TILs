#include <iostream>
using namespace std;
int main() {
    int n, i, cnt3=0, cnt5=0;
    for(i=1; i<=10; i++){
        cin >> n;
        if(n%3==0){
            cnt3++;
        }
        if(n%5==0){
            cnt5++;
        }
    }
    cout << cnt3 << " "<< cnt5;
    return 0;
}