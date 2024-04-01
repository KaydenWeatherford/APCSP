#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

// g++ -o "MSOE_2015_4.exe" "Assignments/MSOE_2015_4.cpp" && ./"MSOE_2015_4.exe"
int main()
{
  vector<int> numbers;
  double Third;
  double x, y;
  int R;
  int round = 0;
  
  while (R != 10)
  {
    cout << "Enter a number: \n";
    cin >> x;

    if(!cin)
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // https://stackoverflow.com/questions/5655142
    
    }
    else
    {
    round = floor(100 * x + 0.5f);
    numbers.push_back(round);
    sort(numbers.begin(), numbers.end());
    
    cout << "Sorted \n"; 
    for (double x : numbers)
    {
      cout << (x/100) << " "; 
    }
    cout << "\n";


    if (R >= 3)
    {
      y = numbers[R-2];
      Third = y / 100;
      cout << Third << endl;
    }
    R++;
      
    }
  }

  for (vector<int>::const_iterator it=numbers.begin(); it!=numbers.end(); ++it) {
    cout << *it << " ";
  }

  
  cout << endl;
}