#include <iostream>
using namespace std;
int main() {
    
    float m  ;
    cin >> m;
    if( m >=1.0){
        cout << "High";
    }
    else if (1.0> m >=0.5){
        cout << "Middle";
    }
    
    else cout << "Low";// 여기에 코드를 작성해주세요.
    return 0;
}