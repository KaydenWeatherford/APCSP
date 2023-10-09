#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s1(" ");
    string s2(" ");
    
    cout << "Input a string.\n";
    getline(cin, s1);
    cout << "Input a string to find.\n";
    getline(cin, s2);
    size_t found = s1.rfind(s2);
  
    if (found != std::string::npos)
    {
        cout << "Substring Found: \"" << s2 << "\" In \"" << s1 << "\"" << endl;
    }
    else
    {
        cout << "Substring not Found" << endl;
    }

    return 0;
}