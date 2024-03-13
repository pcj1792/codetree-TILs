#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >>c;
    bool d=true;

    for(int i=a; i<=b; i++){
        if(i%c==0){
            d=false;
        }
    }
    if(d==true) cout << "YES";
    else cout << "NO";
    return 0;
}