#include <iostream>
using namespace std;

int main() {
    int n ;
    int book =3000;
    int mask =1000;
    cin >> n;
    if (n>=3000){
        cout << "book";
    }
    else if (n >= 1000){
        cout << "mask";
    }
    else cout << "no";
    // 여기에 코드를 작성해주세요.
    return 0;
}