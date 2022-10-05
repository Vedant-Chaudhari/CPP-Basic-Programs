#include <iostream>
using namespace std ;

int c = 45 ;

int main()

{
  int a, b, c ;

cout << "Enter the value of a : " ;
cin >> a ;
cout << "Enter the value of b : " ;
cin >> b ;

c = a + b ;

cout << "The Value of a + b is : " << c << endl ;
cout << "The Value of Global c is : " << ::c ;

return 0 ;

}
