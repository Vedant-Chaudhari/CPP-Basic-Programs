#include <iostream>
using namespace std ;

class Hero
{
public:
  int health ;
  char level ;

};

int main()
{
  Hero Superman ;
  Superman.health = 70 ;
  Superman.level = '2' ;

  cout << Superman.health << endl ; //If Class would have been Private, this statement won,t work.
  cout << Superman.level ;

  return 0 ;

}
