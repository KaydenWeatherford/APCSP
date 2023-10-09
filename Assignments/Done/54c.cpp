#include <iostream>
#include <cmath>
using namespace std;

double round_to(double value, double precision = 1.0)
{
    return round(value / precision) * precision;
}

int main()
{
  double value = 1;
  double precision[] = { 0.001}; 
  double D, R, A, C, P;
  int DA, RA, AA, CA, PA;
    P = 3.14159;
cout << "\nEnter the Radius of a Circle: " << endl;
    cin >> R;
    D = R * 2;
    C = (2 * P) * R;
    A = P * pow(R, 2);
for (double p : precision)
    {
  double RA = round_to(R, p);
  double DA = round_to(D, p);
  double CA = round_to(C, p);
  double AA = round_to(A, p);
      
  cout << "\nThe Radius is: " << RA;
  cout << "\nThe Diameter is: " << DA;
  cout << "\nThe Circumference is: " << CA;
  cout << "\nThe Area is: " << AA << endl;
    }
  
  
  return 0;
}