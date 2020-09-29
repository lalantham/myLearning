#include<iostream>
#include<array>

using namespace std;

  int main(){
    int arr[] = {23, 33, 11, 65, 73};
    int al = sizeof(arr)/sizeof(arr[0]);
    cout << "The length of the array is: " <<al << endl;
    return 0;

  }
