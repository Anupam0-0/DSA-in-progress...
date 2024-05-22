#include <iostream>
using namespace std;

int evenlyDivides(int N){
    int divisibles = 0;
    int num = N;        
    while(num){
        int digit = num % 10;
        if(digit != 0 && N % digit == 0) divisibles++;
        num /= 10;
    }
    return divisibles;
}

int main(){
    int n;
    cout << "Input the digits: ";
    cin >> n;
    int cnt = evenlyDivides(n);
    cout << "No of. Digits: " << cnt << endl;
}



