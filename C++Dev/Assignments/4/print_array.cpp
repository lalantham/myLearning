#include <iostream>

using namespace std;

  int main(){
    double arrdbl[4] = {15.32,67.87,56.66,11.12};
    for(int i=0; i<4; i++)
    {
    cout << "Array [" << i << "] = " << arrdbl[ i ] << endl;
    }
    cout << endl;

    for(int i=0; i<4; i++)
    {
    cout << "Array [" << i << "] = " << (arrdbl + i) << endl;
    }

    return 0;
  }
