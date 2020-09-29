#include <iostream>

using namespace std;

int main(){

    int size = 5;
    int arr[size] = {90, 5, 42, 55,73};

    cout << endl << "Before Sort" << endl;
    for(int l = 0; l < size; l++){
        cout << arr[l] << " | ";
    }

    for(int i = 1; i < size; i++){
        int val = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > val){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = val;
    }

    cout << endl << "After Sort" << endl;
    for(int k = 0; k < size; k++){
        cout << arr[k] << " | ";
    }
    
    return 0;
}