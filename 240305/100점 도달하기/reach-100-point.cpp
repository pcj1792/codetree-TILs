#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin >> n;
    for(i=n; i<=100; i++)
    {
        if(i>=90) cout << 'A'<< " ";
        else if(i>=80) cout << 'B'<<" ";
        else if(i>=80) cout << 'C'<<" ";
        else if(i>=80) cout << 'D'<<" ";
        else cout << 'F'<<" ";
    }
    return 0;
}