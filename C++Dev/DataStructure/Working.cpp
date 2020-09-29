#include <iostream>

using namespace std;

int main(){

    int num[5] = {56, 5, 96, 99, 24};

    for(int j = 0; j < 5; j++){
        cout << num[j] << " | ";
    }
    
    for(int x = 0; x < 5; x++){
        for(int i = 0; i < 5-x-1; i++){
            if(num[i] > num[i+1]){
                int temp;
                temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
    }

    cout << endl;

    for(int k = 0; k < 5; k++){
        cout << num[k] << " | ";
    }
    
    
    return 0;
}