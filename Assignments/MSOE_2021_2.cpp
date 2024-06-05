#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <ctime>
#include <vector>
#include <bits/stdc++.h> 
#include <tuple>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(){
  int oz = 0, cupammount = 0, count = 0;
  vector<int> cups;
  srand(time(NULL));

  cout << "Enter the amount of Water in the Coffee Machine (oz): \n";
  cin >> oz;
  cout << "Enter the amount of Cups needing to be filled: \n";
  cin >> cupammount;
  cout << "\n";

  for (int i = 0; i < cupammount; i++)
    {
      int temp = 0, x, N = 100;
      x = (rand() % N);
      if (x > 66)
      {
        cups.push_back(8);
        cout << 8 << endl;
      }
      else if (x > 33 && x <= 66)
      {
        cups.push_back(6);
        cout << 6 << endl;
      }
      else if (x > 0 && x <= 33)
      {
        cups.push_back(4);
        cout << 4 << endl;
      }
      else
      {
        cout << "Error, Number Got was: " << x << endl;
        return 0;
      }
    }

  for (int i = 0; i < cupammount; i++)
    {
      if (oz > 9 && oz >= (cups[i] + 1))
      {
        cout << oz << endl;
        oz = oz - (cups[i] + 1);
        count++;
      }
      else 
        break;
    }

  cout << "The amount of cups that can be filled before changing water is: " << count << endl;
}