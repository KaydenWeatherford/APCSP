#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){
  int e, d, x;
  double dp, p, xp;
  // e = # of Eggs
  // d = Dozen
  // dp = Dozen price
  // x = Extra Eggs
  // p = Total Price
  
  cout << "How Many Eggs Are You Buying?\n";
    cin >> e;

  if (e < 48 && e >= 0){
    dp = 0.5;
    d = e/12;
    x = e % 12;
    xp = x * (dp / 12);
  }
  else if (e < 72 && e >= 48){
    dp = 0.45;
    d = e/12;
    x = e % 12;
    xp = x * (dp / 12);
  }
  else if (e >= 72 && e < 132){
    dp = 0.4;
    d = e/12;
    x = e % 12;
    xp = x * (dp / 12);
  }
 else if (e >= 132){
    dp = 0.45;
    d = e/12;
    x = e % 12;
    xp = x * (dp / 12);
  }
  else {
    cout << "Negitive Egg.";
  }
 p = (d * dp) + xp;
  cout << "The number of Eggs Purchased: " << e << endl;
  printf("The bill is equal to: %.2f", p);
  return 0;
}