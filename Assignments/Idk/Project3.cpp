#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <array>
#include <cmath>
using namespace std;

// g++ -o "Project3.exe" "Assignments/Project3.cpp" && ./"Project3.exe"

// Bill Spliter
int main()
{
  int people, i;
  float z, total, split;
  vector<int>prices{};
  bool j=0;
  string x;
  char usure;
  
  cout << "How many people are splitting the bill? \n";
  cin >> people;

  while (j == 0)
  {
      cout << "How much did your item cost? \n";
      cin >> z;
      prices.push_back((z * 100));

      cout << "Is that all? (y/n) \n";
      cin >> usure;
      if (usure == 'y')
      {
        j = 1;
      }
  }
  
  for (auto it = prices.begin(); it != prices.end(); ++it)
    {
      cout << *it << endl;
      total += *it;
    }

    
  total = total / 100;
  
  cout << "\nThe Total is:" << total << endl;
  total = total * 100+0.5;
  total = floor(total);
  total = total / 100;
  
  split = total / people;
  split = split * 100+0.5;
  split = floor(split);
  split = split / 100;
  
  cout << "Each person owes:" << split << endl;
}