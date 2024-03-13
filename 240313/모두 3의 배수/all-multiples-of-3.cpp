#include <iostream>
using namespace std;

int main() {
    int n;
    bool s= true;

    for(int i=1; i<=5; i++){
        cin >> n;
    }
    for(int i=1; i<=100; i++){
        if(i%3!=0) s=false;
    }
    if(s==true) cout << 1;
    else cout << 0;
    return 0;
}