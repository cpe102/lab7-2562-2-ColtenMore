#include <iostream>
using namespace std;

int main()
{
  string rank;
  cout << "Input your rank:";
  cin >> rank;

  if(rank=="S") cout << "You have received Super Ultra Rare Unit!!!\nYou have received 5 gems.\nYou have received 1 gems.\nYou have received 2000 coins.\nYou have received very KAK items.\n";
  else 
  if(rank=="A") cout << "You have received 5 gems.\nYou have received 1 gems.\nYou have received 2000 coins.\nYou have received very KAK items.\n";
  else 
  if(rank=="B") cout << "You have received 1 gems.\nYou have received 2000 coins.\nYou have received very KAK items.\n";
  else 
  if(rank=="C") cout << "You have received 2000 coins.\nYou have received very KAK items.\n";
  else 
  if(rank=="D") cout << "You have received very KAK items.\n";
  

  return 0;
}
