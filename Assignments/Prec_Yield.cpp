#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
#include <tuple>
using namespace std;

int binarySearch(string arr[], string x, int n) 
{ 
    int l = 0;
    int r = n - 1; 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        int res = -1000; 
        if (x == (arr[m])) 
            res = 0; 
        if (res == 0) 
            return m; 
        if (x > (arr[m])) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 

int main(){
  string Element[118] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe", "Cs", "Ba", "La", "Ce", "Pr", "Nd" ,"Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac" ,"Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr" ,"Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Nh", "Fl", "Mc", "Lv", "Ts", "Og")
  double Atomic_Weight[118] = [1.008, 4.003, 6.941, 9.012, 10.811, 12.011, 14.007, 15.999, 18.998, 20.180, 22.990, 24.305, 26.982, 28.086, 30.974, 32.065, 35.453, 39.948, 39.098, 40.078, 44.956, 47.867, 50.942, 51.996, 54.938, 55.845, 58.933, 58.693, 63.546, 65.38, 69.723, 72.630, 74.922, 78.971, 79.904, 83.798, 85.468, 87.62, 88.906, 91.224, 92.906, 95.95, 98, 101.07, 102.906, 106.42, 107.868, 112.411, 114.818, 118.71, 121.760, 127.60, 126.904, 131.293, 132.906, 137.327, 138.905, 140.116, 140.908, 144.243, 145, 150.36, 151.964, 157.25, 158.925, 162.500, 164.930, 167.259, 168.934, 173.054, 174.967, 178.49, 180.948, 183.84, 186.207, 190.23, 192.217, 195.085, 196.967, 200.592, 204.383, 207.2, 208.980, 209, 210, 222, 223, 226, 227, 232.038, 231.036, 238.029, 237, 244, 243, 247, 247, 251, 252, 257, 258, 259, 266, 267, 268, 269, 270, 277, 278, 281, 282, 285, 286, 289, 290, 293, 294, 294]

  int x, amount;
  double grams, moles, index, temp1, temp2, temp3, cloudmol;
  char y;
  string inp1;
  vector<double> molesArr;
  vector<double> gramsArr;
  cout << "Are you solving from the Product or Reactant?\n";
  cin >> y;
  cout << "How many varibles are you solving for?\n";
  cin >> x;
  
  if (y == 'R'|| y == 'r')
  {
    for(int i = 0; i < x; i++)
      {
        cout << "Is it a compount? \n";
        cin >> char y;
        
        if (y == 'Y' || y == 'y')
        {
          cout << "How many elements are in the compound?\n";
          cin >> int amount;
          for(int j = 0; j < amount; j++)
            {
              cout << "What is the element?\n";
              cin >> inp1;
              index = binarySearch(Element, inp1, 118);
              cout << "How many of this element?\n";
              cin >> int temp2;
              temp1 = temp1 + (Atomic_Weight[index] * temp2);
            }
            cout << "How many grams of this compound?\n";
            cin >> int grams;
            cout << "How many compounds?\n";
            cin >> int input1;
            cloudmol = (grams/temp1) / input1;
            molesArr.push_back(grams/temp1);
          else if(y == 'N' || y == 'n')
            {
              cout << "What is the element?\n";
              cin >> inp1;
              index = binarySearch(Element, inp1, 118);
              
              cout << "What is the element's mass? (g)\n";
              cin >> grams;
              gramsArr.push_back(grams);
      
              cout << "How many of this element are you using?\n";
              cin >> amount;
              
              moles = grams / Atomic_Weight[index];
              molesArr.push_back(moles);
            } 
          else
          {
            cout << "Invalid Input\n";
            return 0;
          }
        }
    
      }

  }