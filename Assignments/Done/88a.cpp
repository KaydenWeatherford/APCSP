#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <ctime>

using namespace std;
//This was kind of easy for some reason...
int main()
{
  int x, y, sum, diff, prod, dis, max, min; 
  float avg;
  cout << "What is the value of X? " << endl;
  cin >> x;
  
  cout << "What is the value of Y? " << endl;
  cin >> y;

  sum = x + y;
  diff = x - y;
  prod = x * y;
  avg = (x + y) / 2;
  dis = abs(x - y);
  max = (abs(y) < abs(x)) ? x : y;
  min = (abs(x) < abs(y)) ? x : y;


  cout << "The sum is: " << sum << endl << "The difference is: " << diff << endl << "The product is: " << prod << endl << "The average is: " << avg << endl << "The absolute value is: " << dis << endl << "The maximum is: " << max << endl << "The minimum is: " << min;
}