#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
#include <tuple>
using namespace std;

// g++ -o "MSOE_2018_9.exe" "Assignments/MSOE_2018_9.cpp" && ./"MSOE_2018_9.exe"
// Test: Welcome to MSOE
// Key: 8675309



string decToBinary(int n)
{
  string stuff = "";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            stuff = stuff + "1";
        else
            stuff = stuff + "0";
    }
  return stuff;
}

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

vector<int> setStringtoASCII(string str)
{
    int l = str.length();
    vector<int> convert;
    for (int i = 0; i < (l-1); i++) {
        char c = str[i];
        convert.push_back(int(c));
    }
    return convert;
}

string setBinarytoASCII(string str)
{
    cout << endl;
    int N = int(str.size());
    if (N % 6 != 0) {
        return "Not Possible!";
    }
    string res = "";
    for (int i = 0; i < N; i += 6) {
        int decimal_value = binaryToDecimal((str.substr(i, 6)));
        res += char(decimal_value);
        cout << decimal_value << "\n";
    }
    return res;
}

string xoring(string a, string b){
string ans = "";
int n = a.length();
int j = 0;
  cout << "\n"<< n << "\n" << b.length() << "\n\n";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[j])
        {
            ans += "0";
            cout << "0";
        }
        else
        {
            ans += "1";
            cout << "1";
        }
      j++;
      if(j == b.length() + 1)
      {
        j = 0;
        char first = b[0];
        b.erase(0,1);
        b += first;
      }
    }
  cout << endl;
  return ans;
}

string encryptDecrypt(string inpString, string xorKey) 
{  
    int len = inpString.length(), count;
    string BinaryStr;
    vector<int> Ascii = setStringtoASCII(inpString);
    cout << "String to binary: \n";
    for (int i = 0; i < len; i++)
      {
        BinaryStr += decToBinary(Ascii[i]);
      }
    string newStr = xoring(BinaryStr, xorKey);
    string ans = setBinarytoASCII(newStr);
    
    return ans;
} 

int main(){

  string input = "WELCOME TO MSOE";
  int key = 8675309;

  cout << "The String you have entered is: \n'";
  cout << input << "'\n\n";
  cout << "The Key you have entered is: \n'";
  cout << key << "'\n" << endl;

  
  string xorKey = decToBinary(key);

  string output = encryptDecrypt(input, xorKey);
  
  cout << "The new Text is: G " << output << "" << endl;
}