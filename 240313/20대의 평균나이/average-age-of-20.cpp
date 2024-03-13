#include <iostream>
using namespace std;
int main() {
    int age, cnt=0;
    double avg,sum=0;
    while(true){
        cin >> age;
        
        if(age<=19 || age>=30){
            break;
        }
        sum += age;
        cnt++;
        avg=(double)sum/cnt;    

    }
    cout.precision(2);
    cout << fixed << avg;
    return 0;
}