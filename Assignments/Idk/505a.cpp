#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void removeDupWord(string str)
{
    istringstream ss(str);

    string word; // for storing each word
    
    while (ss >> word) 
    {
        // print the read word
        cout << word << "\n";
    }
}

int main(){
  string arr = [100];
  fstream new_file;

  // open a file to perform read operation using file object.
  new_file.open("Data/505a.txt", ios::in); 

  // Checking whether the file is open.
  if (new_file.is_open()) { 
      string sa;
      // Read data from the file object and put it into a string.
      while (getline(new_file, sa)) { 
          // GET THE TXT INTO THE ARRAY. 
         arr[] = removeDupWord(sa);
          
      }

      // Close the file object.
      new_file.close(); 
  
  }
  return 0;
}