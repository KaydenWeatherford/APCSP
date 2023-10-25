#include <iostream>
using namespace std;

// g++ -o Assignments/MSOE_2009-5.exe Assignments/MSOE_2009-5.cpp && ./Assignments/MSOE_2009-5.exe

int main() {

  int n;
  bool isPrime = true;
  
  cout << "Enter a positive integer: ";
  cin >> n;
  // Check to see if n is = to 0 and 1 (They are not prime numbers)
  if (n == 0 || n == 1) 
  {
    isPrime = false;
  }
  for (int i = 2; i <= n/2; ++i) 
  {
    if (n % i == 0) 
    {
      isPrime = false;
      break;
    }
  }
  if (isPrime) 
  {
    cout << n << " is a prime number.\n";
  }
  else 
  {
    cout << n << " is not a prime number.\n";
  }
  return 0;
}