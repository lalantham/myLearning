#include <iostream>
#include <string>

using namespace std;

  struct Employee{
  string empname; int age;
  int salary; string jobtitle;
  };

  void dispalyData(Employee e){ Employee *ptr; ptr=&e;

  cout<<" Print Employee Details Using ARROW Operator"<<endl; cout<<"ptr -> name : "<< ptr -> empname << endl;
  cout<<"ptr -> age : "<< ptr -> age << endl;
  }


  int main (){
  Employee e;
  e.empname="lalantha"; e.age=24; e.salary=40000;

  e.jobtitle="It Assistant";
  dispalyData(e);
  return 0;
  }
