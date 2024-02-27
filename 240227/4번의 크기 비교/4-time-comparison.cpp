#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e, first, second, third, fifth;
    cin >> a ; 
    cin >> b >> c >> d >> e;
    first = a>b? 1:0;
    second = a> c? 1:0;
    third = a> d? 1:0;
    fifth = a> e? 1:0;
    cout << first <<endl <<second << endl << third << endl << fifth;
    return 0;
}