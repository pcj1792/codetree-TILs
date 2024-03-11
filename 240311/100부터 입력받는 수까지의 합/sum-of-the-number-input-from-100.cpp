#include <iostream>
using namespace std;
int main() {
    int n,i, sum=0;
    cin >>n;
    for(i=n; i<=100; i++){
        sum+=i;
    }
    cout << sum;
    return 0;
}