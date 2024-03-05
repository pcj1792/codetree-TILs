#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    for(int i =1 ; i<=n; i++)
    {
        a= (i%2==0 || i%3==0)? 1:0 ;
        cout << a <<" "; 
    }
    return 0;
}