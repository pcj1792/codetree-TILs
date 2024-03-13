#include <iostream>
using namespace std;
int main() {
    int a,b;
    char w;
    while(true){
        cin >> a >> b >> w;
        cout << a*b << endl;
        if(w=='C')
            break;
        
    }
    return 0;
}