#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <string>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <bits/stdc++.h>

// Idek why I have these libraries. 
using namespace std;

// bash compile.sh Assignments/Project1
// 41. Calculating Taxes based on Revenue(R)

double getSum(double arr[], int n, int A, int B){
  srand(time(NULL)); 
  for(int i=0;i<n;i++)
  {
  arr[i]= ((rand() % (B - A + 1)) + A) / 100.01;
  sleep(1);
  }
  double sum = 0.0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
return (sum);
}

int main(){
  int sz;
  printf("How many weeks need to have Tax calculated?\n");
  cin >> sz;
  

  if (sz > 52)
  {
    printf("You can only calculate a max of a Year (52 Weeks)");
    return 0;
  }
  else if (sz < 0)
  {
    printf("You can't Calculate negitive weeks");
    return (0);
  }
  else if (sz == 0)
  {
    printf("No taxes due if you didn't earn anything.");
    return (0);
  }
  else if(sz > 0 && sz < 53)
  {
  long int A = 500000, B = 10000000;
  double Rev[sz];
  double sum = getSum(Rev, sz, A, B);
  double tax = (sum * 0.05);
  cout<<"\nEvery Week Over the Course of a Month,\nRevenue was Totaled and Collected." <<endl;
  printf("The total Revenue is: $%.2f\n", sum);
  
  printf("The Estimated Taxes Due(5%) On Revenue: $%.2f\n", tax);
  return(0);
  }
 
  else 
  {
    printf("Error");
    return (0);
  }
}