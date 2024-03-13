#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool b= true;

    for(int i=2; i<n; i++){
        if(n%i==0){
            b=false;
        }
    }
    if(b==true) cout << 'P';
    else cout << 'C';
    return 0;
}