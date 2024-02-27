#include <iostream>
using namespace std;
int main() {
    int am,ae,bm,be, t;
    cin >> am >> ae;
    cin >> bm >> be;
    t = am > bm && ae > be ? 1:0;
    cout <<t;
    // 여기에 코드를 작성해주세요.
    return 0;
}