#include <iostream>

using namespace std;

int main(){

    int size = 5;
    int val, first = 0, last = 0, middle = 0;
    int arr[size] = {22,33,44,55,66};

    for(int i = 0; i < size; i++){
        cout << arr[i] << " | ";
    }

    cout << "Enter Value to Find: ";
    cin >> val;

    while(first <= last){
        middle = (first + last) / 2;

        if(val == arr[middle]){
            cout << "Value Found in Position: " << middle << endl;
            break;
        }else if(val < arr[middle]){
            last = middle - 1;
        }else{
            first = middle + 1;
        }
    }

    if(first > last){
        cout << "Value is  Not Found" << endl;
    }
    
    
    return 0;
}