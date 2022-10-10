#include <iostream>
using namespace std ;

int product(int a, int b)
{
  static int c = 0 ;
  c = c + 1 ;
  return a*b+c ;

}


int main()
{
  int a, b ;
  cout <<"Enter the First Number : " ;
  cin >> a ;
  cout <<"Enter the Second Number : " ;
  cin >> b ;

  cout <<"The Product of First and Second Number is : "<< product(a,b) <<endl ;
  cout <<"The Product of First and Second Number is : "<< product(a,b) <<endl ;
  cout <<"The Product of First and Second Number is : "<< product(a,b) <<endl ;
  cout <<"The Product of First and Second Number is : "<< product(a,b) <<endl ;
  cout <<"The Product of First and Second Number is : "<< product(a,b) <<endl ;

  return 0 ;
}
