#include <iostream>
using namespace std;
int main() {
    int m, f ; cin >> m >> f;
    if(m<90 || f<90) cout << 0;
    else if(f>=95) cout << 100000;
    else cout << 50000;
    // 여기에 코드를 작성해주세요.
    return 0;
}