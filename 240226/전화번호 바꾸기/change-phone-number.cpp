#include <iostream>
#include <string>
using namespace std;

int main() {
    int a ,b, c;
    int temp;
    cin >> a ;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    temp = b;
    b = c ;
    c = temp;
    //cout.precision(3);
    cout  << "010" << "-" << b << "-" << c;
    // 여기에 코드를 작성해주세요.
    return 0;
}