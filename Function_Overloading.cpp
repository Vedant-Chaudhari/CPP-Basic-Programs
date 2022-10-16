#include <iostream>
using namespace std ;

int sum(int a, int b )
{
  return a + b ;
}


int sum(int a , int b ,int c)
  {
    return a + b + c ;
  }


int main()
  {
    cout << "The Sum of 3 and 7 is " <<sum(3,7) << endl ;
    cout << "The Sum of 5, 10 and 15 is " <<sum(5,10,15) ;

    return 0 ; 
  }
