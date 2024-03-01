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
        else cout << "BOY";
    }
    else if(s==1){
        if(a<19){
            cout <<"GIRL";
        }
        else cout << "WOMAN";
    } 
    return 0;
}