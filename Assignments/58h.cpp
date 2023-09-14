#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;


// P is the starting amount.
// R is the rate of interest in percent
// N is the number of days compounded per year
// T is the number of days the money is kept in the savings account
// I is the interest earned 
// A is the amount

int main()
{ 
  double A, R, N, T, P, I;

 //-------------Input------------
cout << "\nEnter how much saved? " << endl;
  cin >> P;
cout << "\nWhat is the Interest Rate? " << endl;
  cin >> R;
cout << "\nHow long are you saving for? " << endl;
  cin >> T;

  //--------Math----------
  N = 365;
  A = P * pow((1 + ( R / (N * 100) )), (( N * T )/365));
  I = A - P;

  // Ok, kayden you have a smooth brain please fix
  printf("Saved: %.2f\n", P);
  printf("Interest Rate? %.2f\n", R);
  printf("Number of compounds per year? %f\n", N);
  printf("Number of days at interest? %.2f\n", T);

  printf("Interest Earned: %.2f\n", I);
  printf("Total: %.2f\n", A);

  return 0;
}