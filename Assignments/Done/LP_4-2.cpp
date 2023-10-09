#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
  double l, w, h, k, s;
  // l = Length
  // w = width
  // h = hight
  // k = Weight (In Kilograms)
  // s = size
  // a = accepted?

  cout << "What is the weight of the package? (In Kilograms)\n";
    cin >> k;
  cout << "What is the length of the package? (In Centimeters)\n";
    cin >> l;
  cout << "What is the width of the package? (In Centimeters)\n";
    cin >> w;
  cout << "What is the hight of the package? (In Centimeters)\n";
    cin >> h;


  s = l * w * h;

  if (s <= 100000 && k < 28){
    cout << "Weight: " << k << endl << "Length: " << l << endl << "Width: " << w << endl << "Hight: " << h << endl;
    
    cout << "The package is good to ship.";
  }
  else if (s <= 100000 && k > 27){
    cout << "Weight: " << k << endl << "Length: " << l << endl << "Width: " << w << endl << "Hight: " << h << endl;

    cout << "The package is too heavy.";
  }
  else if (s > 100000 && k < 28){
    cout << "Weight: " << k << endl << "Length: " << l << endl << "Width: " << w << endl << "Hight: " << h << endl;

    cout << "The package is too big."; 
  }
  else if (s > 100000 && k > 27){
    cout << "Weight: " << k << endl << "Length: " << l << endl << "Width: " << w << endl << "Hight: " << h << endl;

    cout << "The package is too big and heavy.";
  }
  else{
    cout << "Huh?";
  }

  return 0;
    }