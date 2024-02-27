#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    double bmi = w/pow(h*0.01,2);
    if(bmi >= 25){
        cout <<(int)bmi<<endl<< "Obesity";
    }
    else cout << (int)bmi;// 여기에 코드를 작성해주세요.
    return 0;
}