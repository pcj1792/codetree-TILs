#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >>c;
    if(a>=b){
        if(a>=c){
            if(b>=c){
                cout << c;
            }
            else cout << b;
        }
        else cout << a;
        
    }
    else if(a<=b){
        if(a>=c){
            cout << a;
        }
        else if(c>=a){
            if(b>=c) cout << c;
            else cout << b;
        }
    }

    return 0;
}