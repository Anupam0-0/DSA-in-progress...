#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    int len = to_string(n).length();
    int sum = 0;
    int temp = n;
    while(temp){
        int rem = temp % 10;
        sum += pow(rem, len);
        temp /= 10;
    }
    
    return sum == n ? true : false;
}

int main(){
    int n;
    cout << "Input no: ";
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    
}