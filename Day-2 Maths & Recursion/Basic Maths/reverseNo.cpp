#include <iostream>
using namespace std;

int rev (int n){
    int rev = 0, tmp =0;
    while (n){
        tmp = n % 10;
        rev = rev*10 + tmp;
        n /= 10;
    }
    return rev;
}

int main(){
    int n;
    cout << "Input: ";
    cin >> n;
    int revrsd = rev(n);
    cout << "Reversed: " << revrsd << endl;
}