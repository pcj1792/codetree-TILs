#include <iostream>
using namespace std;
int main() {
    int a = 1 , b= 2 , c = 3;
    int sum;
    sum = a+b+c;
    a= b= c= sum;
    cout << a << " "<< b << " "<< c;// 여기에 코드를 작성해주세요.
    return 0;
}