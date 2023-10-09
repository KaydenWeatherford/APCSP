#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
  int c;
  double p, t;

  cout << "How many copies do you wish to buy?\n";
    cin >> c;

    if (c > 0 && c < 100) {
      p = 0.3;
    }
    else if (c > 99 && c < 500) {
      p = 0.28;
    }
    else if (c > 499 && c < 750){
      p = 0.27;
      }
    else if (c > 749 && c < 1001){
      p = 0.26;
    }
    else if (c > 1000){
      p = 0.25;
    }
    else{
      cout << "\nDunce.";
        return main();
    }

    t = c * p;
  
  cout << "\nNumber of Copies to be Printed: " << c << endl;
  cout << "\nPrice per copy: " << p << endl;
  printf("\nTotal price of the Copies: %.2f", t);

  return 0;
}