#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
#include <tuple>
using namespace std;

// g++ -o "MSOE_2007_5.exe" "Assignments/MSOE_2007_5.cpp" && ./"MSOE_2007_5.exe"

int countFreq(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    for (int i = 0; i <= N - M; i++) {

        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == M) {
            res++;
        }
    }
    return res;
}

tuple<int,string> distinctSimilarSubstrings(string str)
{
    int n = str.size();
    if (n <= 1) {
        return make_tuple(1, str);
    }
    vector<vector<int> > dp(
        n + 1, vector<int>(n + 1, 0));
    unordered_set<string> substrings;
    for (int j = n - 1; j >= 0; j--) {
        for (int i = j - 1; i >= 0; i--) {
            if (str[i] == str[j]) {
                dp[i][j] = dp[i + 1][j + 1] + 1;
            }
            // Otherwise
            else {
                dp[i][j] = 0;
            }
            if (dp[i][j] >= j - i) {
                substrings.insert(
                    str.substr(i, j - i));
              
            }
        }
    }
    int occ = 0;
    int temp = 0;
    string outp = "";
    for (auto it = substrings.begin(); it != substrings.end(); it++)
      {
        // You left off here Kayden, Thank you past self
        cout << countFreq(*it, str) << endl;
        occ = countFreq(*it, str);
        if (occ > temp)
        {
          temp = occ;
          outp = *it;
        }
      }
    cout << endl;
    return make_tuple(temp, outp);
}


int main()
{
  string str1;
  cout << "Enter a string: \n";
  cin >> str1;
  auto [count, substrings] = distinctSimilarSubstrings(str1);
  cout << "Modified: " << count << " & " << substrings << endl;
  
  
  
}
