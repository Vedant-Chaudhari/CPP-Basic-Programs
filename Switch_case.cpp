#include <iostream>
using namespace std ;

int main()

{
  int age ;

  cout << "Enter your Age :" ;
  cin >> age  ;

  switch (age)

    case 18:
    cout << "You are 18 years old. " << endl ;
    break ;

    case 22:
    cout << "You are 22 years old. " << endl ;
    break ;

    default:
    cout << "No Special Cases ! " << endl ;

    return 0 ;

}
