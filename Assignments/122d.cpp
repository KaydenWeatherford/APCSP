#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){
long int x,y;
  for (int x = -12; x < 17; x++)  
    {
  y = (pow(x,6) - (3*pow(x,5)) - (93 * pow(x,4)) + (87 * pow(x,3)) + (1596 * pow(x,2)) - (1380 * x) - 2800);
    cout << x << "     " << y << "\n";
    }
 return 0; 
}