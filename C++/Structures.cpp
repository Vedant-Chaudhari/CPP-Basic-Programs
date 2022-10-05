#include <iostream>
using namespace std ;

struct Employee

{
  int id ;
  char favChar ;
  float salary ;

};

int main ()

{
  struct Employee vedant ;

  vedant.id = 19 ;
  vedant.favChar = 's' ;
  vedant.salary = 120 ;

  cout << vedant.id << endl ;
  cout << vedant.favChar << endl ;
  cout << vedant.salary << endl ;

  return 0 ;

}
