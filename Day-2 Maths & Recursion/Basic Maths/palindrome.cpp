#include <iostream>
using namespace std;

bool palindrome(int n){
    int dup = n;
    int rev = 0, tmp =0;
    while (n){
        tmp = n % 10;
        rev = rev*10 + tmp;
        n /= 10;
    }
    if (dup == rev) return true;
    else return false;
}

int main(){
    int n;
    cout << "Input: ";
    cin >> n;
    if (palindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

}