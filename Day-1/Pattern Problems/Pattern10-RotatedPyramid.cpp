#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 0; i < 2*n+1; i++){
        int tmp = i;
        if(i > n) tmp = 2*n-i;
        for(int j = 0; j <= tmp; j++){
            cout << "*";
        }
    cout << endl;
    }
}

int main(){
    int n;
    cout << "Input the size: ";
    cin >> n;
    pattern(n);
}