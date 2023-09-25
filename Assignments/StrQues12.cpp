#include <string>
#include <bits/stdc++.h>
using namespace std;

// I hate strings. I hate strings. I hate strings. I hate strings. I hate strings. I hate strings. I hate strings. I hate the anti-christ.
string reverseString(string str)
{
    stringstream ss(str);
    vector<string> words;
    string temp;
    while (ss >> temp) {
        words.push_back(temp);
    }

    for (int i = 0; i < words.size(); i++) {
        reverse(words[i].begin(), words[i].end());
    }
    string rev = "";
    for (int i = 0; i < words.size(); i++) {
        rev += words[i] + " ";
    }
    rev.pop_back();
    reverse(rev.begin(), rev.end());
    return rev;
}
int main()
{
  string = str; 
  scanf("Please write a sentence. ", str);
    string rev = reverseString(str);
   printf(rev);
 
    return 0;
}
