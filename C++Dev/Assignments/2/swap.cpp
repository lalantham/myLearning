#include <iostream>

using namespace std;

  void swapnum(double &i, double &k) {

    double temp;
    temp = i; i = k;
    k = temp;
  }

  int main(){
    double a = 10.23;
    double b = 20.32;
    cout << "Before swap: " << endl; cout << "A = " << a << endl;
    cout << "B = " << b << endl; swapnum(a,b);
    cout << "After swap: " << endl; cout << "A = " << a << endl; cout << "B = " << b << endl;
  return 0;
  }
