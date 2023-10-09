#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str1;
    string str2;
    int z=0;
    int count=0;
    int set=0;
  
    cout << "Input a string.\n";
    getline(cin, str2);
    cout << "Input a string to find.\n";
    getline(cin, str1);

    for(int x=0;x<str2.size();x++)
    {
     if(str1[z]==str2[x])
      {
        z++;
        count++;
        if(count==3)
          {
            x--;
            set++;
            z=0;
            count=0;
           }
          else
          continue;
        }
      else
       continue;  
    }
    cout << set;

}
