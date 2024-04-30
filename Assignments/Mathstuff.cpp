#include <iostream>
#include <list>
#include <cstring>
#include <string>
#include <array>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
#include <tuple>
using namespace std;

int main()
{
  double a=0, b=0, x=0, h=0,k=0;
  char FAG = "";

  cout << "You wanna solve for b loser? (y/n)\n";
  cin >> FAG;

  if(FAG == 'n' || FAG == 'N')
  {
    cout << "Enter the A, B, X, H & K: \n";
    cin >> a >> b >> x >> h >> k;
    int expo = a * pow(b, (x-h)) + k;
    cout << expo;
  }
  else if(FAG == 'y' || FAG == 'Y')
  {
    cout << "Enter the A, X, H, K & The Solution: \n";
    cin >> a >> x >> h >> k >> double ans;
    b = ((ans - k) / (ans - k)) / (a * pow(h, (x-h)));
  }



  
}