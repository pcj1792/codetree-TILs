#include <iostream>
using namespace std;
int main() {
    int am, ae, bm, be; 
    cin >> am >> ae;
    cin >> bm >> be;
    if(am>bm) cout << "A";
    else if(am<bm) cout << "B";
    else if(am==bm && ae > be) cout << "A";
    else cout << "B" ;// 여기에 코드를 작성해주세요.
    return 0;
}