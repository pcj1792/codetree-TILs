#include <iostream>
using namespace std;
int main() {
    char T ;
    cin >> T;
    if (T == 'S') cout << "Superior";
    else if (T == 'A') cout << "Excellent";
    else if (T == 'B') cout << "Good";
    else if (T == 'C') cout << "Usually";
    else if (T == 'D') cout << "Effort";
    else cout << "Failure";
    // 여기에 코드를 작성해주세요.
    return 0;
}