#include <iostream>
using namespace std;

void pattern(int n){
    for(int i =0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout << (j+1);
        }
    cout << endl;
    }
}

int main(){
    int n;
    cout << "Input: ";
    cin >> n;
    pattern(n);
}