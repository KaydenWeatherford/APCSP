#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
int time1, time2, hour1, hour2, min1, min2, total1, total2, diff, outp, outm;

  
  printf("\nWhat is your starting time? (In military time format 0000) ") ;
  cin >> time1;
  min1 = time1%100;
 
  printf("\nWhat is your ending time?");
  cin >> time2;
  min2 = time2%100;


  if (time1 < time2) {
    if (time1 < 1000) {
      string s = to_string(time1);
      int first_digit = s.front() - '0';
      hour1 = first_digit;
    }
      else {
    hour1 = time1/100;
      }
  
  if (time2 < 1000) {
      string s2 = to_string(time2);
      int first_digit2 = s2.front() - '0';
      hour2 = first_digit2;
    }
  else {
       hour2 = time2/100;
       }
   hour1 = hour1 * 60;
  hour2 = hour2 * 60;
  total1 = hour1 + min1;
  total2 = hour2 + min2;
    diff = total2 - total1;
 outp = diff/60;
  outm = diff % 60;
  }

// Its very long and full of the same stuff but it works!

    
  else {
    if (time1 < 1000) {
      string s = to_string(time1);
      int first_digit = s.front() - '0';
      hour1 = first_digit;
    }
      else {
    hour1 = time1/100;
      }
  if (time2 < 1000) {
      string s2 = to_string(time2);
      int first_digit2 = s2.front() - '0';
      hour2 = first_digit2;
    }
  else {
       hour2 = time2/100;
       }
  hour1 = hour1 * 60;
  hour2 = hour2 * 60;
  total1 = hour1 + min1;
  total2 = hour2 + min2;
  diff = (total2 - total1) + 1500;
 
    outp = diff/60;
  outm = diff % 60;
  
  }
  cout << "The time difference is: " << outp << " Hours and " << outm << " Minutes. " << endl;
}