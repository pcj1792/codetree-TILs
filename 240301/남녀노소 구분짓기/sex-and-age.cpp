#include <iostream>
using namespace std;
int main() {
    int a,s;
    cin >> s; 
    cin >> a;
    if(s==0){
        if(a>=19){
            cout << "MAN";
        }
        else cout << "WOMAN";
    }
    else if(s==0){
        if(a<19){
            cout <<"BOY";
        }
        else cout << "GIRL";
    } 
    return 0;
}