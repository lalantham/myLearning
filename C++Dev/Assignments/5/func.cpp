#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

  int *getRand(){
    static int r[10];
    for (int i=0; i<10; i++)
    {
      r[ i ] = rand();
    }
  return r;
  }
  int main(){
    int *ptr; srand(time(0)); ptr = getRand();

    for(int i = 0; i<10; i++){
    cout << "Array ["<< i << " ] - " << *(ptr + i) << endl;
    }
  return 0;
  }
