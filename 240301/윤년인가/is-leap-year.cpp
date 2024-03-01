#include <iostream>
#include <string>
using namespace std;
int main() {
    int y;
    cin >> y;
    string z= (y%4!=0 || y%100==0) ? "false" : "true";
    cout << z;
    return 0;
}