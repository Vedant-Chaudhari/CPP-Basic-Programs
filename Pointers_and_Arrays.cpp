#include <iostream>
using namespace std ;

int main()

{
  int marks[] = {10, 15, 20, 25, 30} ;

  int*p = marks ;

  cout << *p << endl ;
  cout << *(p+1) << endl ;
  cout << *(p+2) << endl ;
  cout << *(p+3) << endl ;
  cout << *(p+4) << endl ;

  return 0 ;
}
