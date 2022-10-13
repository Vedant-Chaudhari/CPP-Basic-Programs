#include <iostream>
using namespace std ;

float moneyReceived(int currentMoney , float factor = 1.04)

{
  return currentMoney * factor ;
}

int main()

{
  int a, b ;
  int money = 100000 ;
  cout << "If you have "<<money<<" Rs in your Bank Account then you will receive "<<moneyReceived(money)<<" Rs after 1 Year." <<endl ;
  cout << "For VIP : If you have "<<money<<" Rs in your Bank Account then you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 Year." ;
  return 0 ;
}
