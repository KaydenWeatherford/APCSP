#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

// g++ -o "MSOE_2015_7.exe" "Assignments/MSOE_2015_7.cpp" && ./"MSOE_2015_7.exe"

vector<int> generateTri(int a){
  // Generates all the triangles that can be made from the given number.
  int T;
  vector<int> Tri;
  for (int i = 0; i <= a; i++){
    T = (i * (i+1)) / 2;
    Tri.push_back(T);
  }
  cout << "\n";
  return Tri;
}

int main(){
  int a;
  vector<int>genTri{};
  
  cout << "Enter a number to get Triangle Number: \n";
  cin >> a;
  
  genTri = generateTri(a);
  reverse(genTri.begin(), genTri.end());
  cout << "\n";

  int i = 0;
  int c = 0;
  while (a >= 0)
  {
    if(a == 0 && c == 2)
     {
      cout << "0";
      i = i + 1;
      a = a - 1;
      c = c+1;
     }
    else if(genTri[i] <= a && c < 4){
      a = a - genTri[i];
      cout << genTri[i] << ",";
      c++;
    }
    else if(a == 0 && c == 3)
    {
      a = -1;
    }
    else
    {
    i = i +1;
    }
    
  }
  cout << endl;
}