# include <iostream>
#include<cstdlib>
#include <stdlib.h>

using namespace std;

int main (){
  int value,size,a[30], position;
  cout << " Enter Size of Array Length Less Than 30 :"; cin>>size;
  if(size<30){
  for( int i=0;i<size;++i){ a[i]=rand(); }
  for( int i=0;i<size;i++){
  cout<< "a[" << i<< "] ="<< a[i]<<endl; } } position = 5;
  cout << "Delete 4th Element (a[4] deleted ):"<< position << endl; for( int i=position-1;i<size;i++)
  {
  a[i]=a[i+1]; } size--;
  for( int i=0;i<size;i++) {
  cout<< "a[" << i<< "] ="<< a[i]<<endl; }

return 0;
}
