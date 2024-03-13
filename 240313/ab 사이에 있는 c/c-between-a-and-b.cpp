#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    bool R=false;
    for(int i=a; i<=b; i++){
        if(i%c==0) {
            R=true; 
            break;
        }
        
    }
    if(R==true) cout << "YES";
    else cout << "NO";
    return 0;
}