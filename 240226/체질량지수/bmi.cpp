#include <iostream>

using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    double bmi = w/h*h;
    if(bmi >= 25){
        cout <<floor(bmi)<<endl<< "obesity";
    }
    else cout <<floor(bmi) ;// 여기에 코드를 작성해주세요.
    return 0;
}