#include <iostream>

using namespace std;

int main(){

    int size = 5;
    int arr[size] = {5, 95, 44, 82, 10};

    cout << "Before Sort" << endl;
    for(int k = 0; k < size; k++){
        cout << arr[k] << " | ";
    }

    cout << endl;
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Before Sort" << endl;
    for(int l = 0; l < size; l++){
        cout << arr[l] << " | ";
    }
    
    return 0;
}