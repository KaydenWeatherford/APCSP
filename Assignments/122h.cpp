#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){
double x, sq, sr, cb, fthrt;
  for (int x = 1; x < 21; x++)  
    {
      sq = pow(x,2);
      sr = sqrt(x);
      cb = pow(x,3);
      fthrt = pow(x, 0.25);

    
    cout << setfill(' ') << left << setw(10) << x
          << setfill(' ') << left << setw(10)<< sq
          << setfill(' ') << left << setw(10)<<  sr
          << setfill(' ') << left << setw(10)<< cb
          << setfill(' ') << left << setw(10)<<  fthrt << "\n";
    }
 return 0; 
}