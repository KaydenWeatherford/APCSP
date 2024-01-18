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

// bash compile.sh Assignments/Project2
string morseECode(string str, string str2[])
  {
  // Text -> Morse Code
    // ALL INPUT IS SUPPOSED TO BE UPPERCASE!!!!!!
    for (int i = 0; i < str.length(); i++)
      {
        if (str.substr(i,1).compare("A") == 0){
            cout << str2[0];}
          else if (str.substr(i,1).compare("B") == 0){
            cout << str2[1];}
          else if (str.substr(i,1).compare("C") == 0){
            cout << str2[2];}
          else if (str.substr(i,1).compare("D") == 0){
            cout << str2[3];}
          else if (str.substr(i,1).compare("E") == 0){
            cout << str2[4];}
          else if (str.substr(i,1).compare("F") == 0){
            cout << str2[5];}
          else if (str.substr(i,1).compare("G") == 0){
            cout << str2[6];}
          else if (str.substr(i,1).compare("H") == 0){
            cout << str2[7];}
          else if (str.substr(i,1).compare("I") == 0){
            cout << str2[8];}
          else if (str.substr(i,1).compare("J") == 0){
            cout << str2[9];}
          else if (str.substr(i,1).compare("K") == 0){
            cout << str2[10];}
          else if (str.substr(i,1).compare("L") == 0){
            cout << str2[11];}
          else if (str.substr(i,1).compare("M") == 0){
            cout << str2[12];}
          else if (str.substr(i,1).compare("N") == 0){
            cout << str2[13];}
          else if (str.substr(i,1).compare("O") == 0){
            cout << str2[14];}
          else if (str.substr(i,1).compare("P") == 0){
            cout << str2[15];}
          else if (str.substr(i,1).compare("Q") == 0){
            cout << str2[16];}
          else if (str.substr(i,1).compare("R") == 0){
            cout << str2[17];}
          else if (str.substr(i,1).compare("S") == 0){
            cout << str2[18];}
          else if (str.substr(i,1).compare("T") == 0){
            cout << str2[19];}
          else if (str.substr(i,1).compare("U") == 0){
            cout << str2[20];}
          else if (str.substr(i,1).compare("V") == 0){
            cout << str2[21];}
          else if (str.substr(i,1).compare("W") == 0){
            cout << str2[22];}
          else if (str.substr(i,1).compare("X") == 0){
            cout << str2[23];}
          else if (str.substr(i,1).compare("Y") == 0){
            cout << str2[24];}
          else if (str.substr(i,1).compare("Z") == 0){
            cout << str2[25];}
          else if (str.substr(i,1).compare("1") == 0){
            cout << str2[26];}
          else if (str.substr(i,1).compare("2") == 0){
            cout << str2[27];}
          else if (str.substr(i,1).compare("3") == 0){
            cout << str2[28];}
          else if (str.substr(i,1).compare("4") == 0){
            cout << str2[29];}
          else if (str.substr(i,1).compare("5") == 0){
            cout << str2[30];}
          else if (str.substr(i,1).compare("6") == 0){
            cout << str2[31];}
          else if (str.substr(i,1).compare("7") == 0){
            cout << str2[32];}
          else if (str.substr(i,1).compare("8") == 0){
            cout << str2[33];}
          else if (str.substr(i,1).compare("9") == 0){
            cout << str2[34];}
          else if (str.substr(i,1).compare("0") == 0){
            cout << str2[35];}
          else if (str.substr(i,1).compare(" ") == 0){
            cout << str2[36];}
          else {
            cout << " INVALID_CHAR! ";}
        }
    cout << "\n-Finished-";
    return "You're dumb";
  }

string morseDCode(string str, string str2[])
  {
  // Morse -> English
    // DOESN'T WORK!!!!
    for (int i = 0; i < str.length(); i++)
      {
        if (str.substr(i,1).compare(" .- ") == 0){
            cout << str2[0];}
          else if (str.substr(i,1).compare("B") == 0){
            cout << str2[1];}
          else if (str.substr(i,1).compare("C") == 0){
            cout << str2[2];}
          else if (str.substr(i,1).compare("D") == 0){
            cout << str2[3];}
          else if (str.substr(i,1).compare("E") == 0){
            cout << str2[4];}
          else if (str.substr(i,1).compare("F") == 0){
            cout << str2[5];}
          else if (str.substr(i,1).compare("G") == 0){
            cout << str2[6];}
          else if (str.substr(i,1).compare("H") == 0){
            cout << str2[7];}
          else if (str.substr(i,1).compare("I") == 0){
            cout << str2[8];}
          else if (str.substr(i,1).compare("J") == 0){
            cout << str2[9];}
          else if (str.substr(i,1).compare("K") == 0){
            cout << str2[10];}
          else if (str.substr(i,1).compare("L") == 0){
            cout << str2[11];}
          else if (str.substr(i,1).compare("M") == 0){
            cout << str2[12];}
          else if (str.substr(i,1).compare("N") == 0){
            cout << str2[13];}
          else if (str.substr(i,1).compare("O") == 0){
            cout << str2[14];}
          else if (str.substr(i,1).compare("P") == 0){
            cout << str2[15];}
          else if (str.substr(i,1).compare("Q") == 0){
            cout << str2[16];}
          else if (str.substr(i,1).compare("R") == 0){
            cout << str2[17];}
          else if (str.substr(i,1).compare("S") == 0){
            cout << str2[18];}
          else if (str.substr(i,1).compare("T") == 0){
            cout << str2[19];}
          else if (str.substr(i,1).compare("U") == 0){
            cout << str2[20];}
          else if (str.substr(i,1).compare("V") == 0){
            cout << str2[21];}
          else if (str.substr(i,1).compare("W") == 0){
            cout << str2[22];}
          else if (str.substr(i,1).compare("X") == 0){
            cout << str2[23];}
          else if (str.substr(i,1).compare("Y") == 0){
            cout << str2[24];}
          else if (str.substr(i,1).compare("Z") == 0){
            cout << str2[25];}
          else if (str.substr(i,1).compare("1") == 0){
            cout << str2[26];}
          else if (str.substr(i,1).compare("2") == 0){
            cout << str2[27];}
          else if (str.substr(i,1).compare("3") == 0){
            cout << str2[28];}
          else if (str.substr(i,1).compare("4") == 0){
            cout << str2[29];}
          else if (str.substr(i,1).compare("5") == 0){
            cout << str2[30];}
          else if (str.substr(i,1).compare("6") == 0){
            cout << str2[31];}
          else if (str.substr(i,1).compare("7") == 0){
            cout << str2[32];}
          else if (str.substr(i,1).compare("8") == 0){
            cout << str2[33];}
          else if (str.substr(i,1).compare("9") == 0){
            cout << str2[34];}
          else if (str.substr(i,1).compare("0") == 0){
            cout << str2[35];}
          else if (str.substr(i,1).compare(" ") == 0){
            cout << str2[36];}
          else {
            cout << " INVALID_CHAR! ";}
        }
    cout << "\n-Finished-";
    return "You're dumb";
  }



int main()
  {
    string Morse[] = {" .- ", " -... ", " -.-. ", " -.. "," . ", " ..-. ", " --. ", " .... ", " .. ", " .--- ",  " -.- ", " .-.. ", " -- ", " -. ", " --- ", " .--. ", " --.- ", " .-. ", " ... ", " - "," ..- ", " ...- ", " .-- ", " -..- ", " -.-- ", " --.. ", " .---- ", " ..--- ", " ...-- ", " ....- ", " ..... ", " -.... ", " --... ", " ---.. ", " ----. ", " ----- ", " _ "};

    const string Letter[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J","K", "L", "M", "N", "O", "P", "Q", "R", "S", "T","U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4","5", "6", "7", "8", "9", "0"," "};

    string s;
    cout << "Are you translating from Morse Code or English? (M/E): ";
    string choice;
    cin >> choice;

  if (choice == "E" || choice == "e") 
    {
    cout << "Enter a message to convert to Morse Code:\n";
    cin >> s;
    cout << "Working On Translation...\n";
    morseECode(s, Morse);
    return 0;
    }
  else if (choice == "M" || choice == "m")
    {
      cout << "I'm too stupid for this\n";
    //  cin >> " " + s;
     // return morseDCode(s, Letter);;
    }
  }