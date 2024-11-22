                        
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> fxn(int n) {
    vector<int> res;   
    for (int i = 1; i <= sqrt(n); ++i) { 
        if (n % i == 0) { 
            res.push_back(i); 
            if (i != n / i) {
                res.push_back(n / i); 
            }
        }
    }

    return res; 
}


int main() {
    int n;
    cout << "Output: ";
    cin >> n;
    vector<int> divisors = fxn(n);
    cout << "Divisors :" ;
    for (int i : divisors){
        cout << i << " ";
    }
}
                                
                            