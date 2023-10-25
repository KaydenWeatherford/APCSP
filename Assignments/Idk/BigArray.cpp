#include <iostream>
#include <string>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

// FUNCTIONS!!!!!!!
  int findMin(int arr[], int n)
  {
  return *min_element(arr, arr + n);
  }
  int findMax(int arr[], int n)
  {
  return *max_element(arr, arr + n);
  }

// Vroom Code
int main()
{
  int sz = 19, A = 20, B = 90;
  int arr[sz];
  int size = sizeof(arr)/sizeof(arr[0]);
  srand(time(NULL)); 
  //-------------Make a damn Array--------    
  for(int i=0;i<sz;i++)
  {
  arr[i]=((rand() % (B - A + 1)) + A);
  sleep(1);
  }
  cout<<"\nArray"<<endl;
  
  for(int i=0;i<sz;i++)
  {
  cout<<arr[i]<<endl;
  }
  //-----------Find Middle-------
  int mid = sizeof(arr) / sizeof(int);
  printf("\nThe mid point is %d", arr[mid/2]);
  
  // --------------Average of F,M,& L--------
  int first = arr[0], last = arr[18], avg = (first + arr[mid/2] + last) / 3;
  printf("\nThe average of F,M,& L is %d \n", avg);
  // --------------Find Largest & Smallest------------
  int N = sizeof(arr) / sizeof(arr[0]);
  
  cout << "\nMaximum is: " << findMax(arr, N);
  cout << "\nMinimum is: " << findMin(arr, N);
  
  return 0;
}