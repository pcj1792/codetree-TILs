#include <iostream>
using namespace std;
int main() {
    int n,i, a;
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> a;
        if(a%2==1 && a%3==0){
            cout << a << endl;
        }
    }
    
    return 0;
}