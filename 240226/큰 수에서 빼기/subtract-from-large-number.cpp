#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (a<=b){
        cout << b-a;    
    }
    if (a>=b){
        cout << a-b;
    }
    //else cout << 0;// 여기에 코드를 작성해주세요.
    return 0;
}