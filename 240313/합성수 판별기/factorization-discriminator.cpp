#include <iostream>
using namespace std;
int main() {
    int n;
    bool a=false;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a=true;    
        }
    }
    if(a=true) cout << 'C';
    else cout << 'N';
    return 0;
}