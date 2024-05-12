#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for(int i = 0; i<n*2; i++ ){
        if(i%2 == 0){
			for (int k=0; k < 1+(i/2); k++){
				cout << "* ";
			}
		}	

		else{
			for(int j = 0; j < n-(i-1)/2; j++){
				cout << "* ";
			}
		}
		cout << endl;
    }
    return 0;
}