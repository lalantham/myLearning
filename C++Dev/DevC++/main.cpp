#include <iostream>

using namespace std;

int main(){

    int size = 10;
    int temp;

    cout << "Before Sort" << endl;
    int arr[size] = {10, 5, 96, 47, 53, 84, 22, 49, 31, 55};

    for(int x = 0; x < size; x++){
        cout << arr[x] << " | ";
    }
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << endl << "After Sort" << endl;
    for(int x = 0; x < size; x++){
        cout << arr[x] << " | ";
    }
    
    return 0;
}
