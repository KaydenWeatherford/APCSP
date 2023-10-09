#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
  
long int x, y = 0;

  cout << "Please choose a positive whole number.";
  cin >> x;
  
  if (x > 0)
  {
  while (x != 1)  
    {
    if (x % 2 == 0)
      {
        // Even
        printf("\n%ld is even, so I take half: ", x);
        x = x / 2;
        y = y + 1;
        printf("%ld", x);
      }
    else if (x%2 == 1)
      {
        // Odd
        printf("\n%ld is odd, so I make 3x+1: ",x);
        x = (3 * x) + 1;
        y = y + 1;
        printf("%ld",x);
      }
    else
      {
      printf("You did something wrong.");
      }
    }
  }
  else
  {
  printf("Please choose a correct number.");
    return main();
  }

  printf("\nThe process took %ld steps to reach 1.", y);
 return 0; 
}