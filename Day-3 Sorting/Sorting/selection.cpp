#include <iostream>
using namespace std;

//ascending order

void input(int arr[], int n){
    cout << "Input: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void output(int arr[], int n){
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++ ){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }  
}

int main(){
    int n , arr[100];
    cout << "Size of array: ";
    cin >> n;
    input(arr, n);
    selectionSort(arr, n);
    output(arr, n);
}

//code by anupam0-0 aka candycoder