// C Program To Check Prime Number Using Function
#include <iostream>
using namespace std;

int checkPrime(int num){
    int count = 0;
    
    if (num == 1){
        count = 1;
    }
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            count = 1;
            break;
        }
    }    
    return count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (checkPrime(num) == 0)
        cout << num << " is a Prime Number.";
    else
        cout << num << " is not a Prime Number.";
    return 0;
}