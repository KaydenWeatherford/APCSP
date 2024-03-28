#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;


double findAverage(vector<double> &list, double total, int count)
{
  for (auto it = list.begin(); it != list.end(); ++it)
  {
    total += *it;
  }
  
  double avg;
  avg = total / count;
  avg = (avg * 100) + 0.5;
  avg = floor(avg);
  avg = avg / 100;
  return avg;
}


int main()
{
  string dotw[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  vector<double>hours{};
  int x, c, i = 0;
  double avg, total = 0;
  bool b = 0;
 
  cout << "Welcome to the hour judger!\n";

  
    while (b == 0)
    { 
      cout << "How many hours were you on your phone on " << dotw[i] << "?\n";

      cin >> x;  
    if (x >= 0 && x <= 24)
    {
      hours.push_back(x);
      i++;
    }
    else if (x < 0 || x > 24)
    {
      cout << "That is not possible. Stop trying to bend the laws of realtiy.\n";
    }
    else
    {
      cout << "huh? A number is required\n";
    }
      if (i == 7)
      {
        b = 1;
      }
    }
  cout << endl;
  
  avg = findAverage(hours, total, size(dotw));

  if (avg < 2)
  {
    cout << "My god, you actually touch grass! Good on you!\n";
  }
  else if (avg >= 2 && avg < 4)
  {
    cout << "You're fine. Not a terribly bad habit.\n";
  }
  else if (avg >= 4 && avg < 6)
  {
    cout << "You're a bit addicted, but you can still see the sun.\n";
  }
  else if (avg >= 6 && avg < 8)
  {
    cout << "You're addicted. You're not going to get out of bed in the morning.\n";
  }
  else if (avg >= 8 && avg < 10)
  {
    cout << "I recommend seeking mental help and some vitamin D suppliments.\n";
  }
  else if (avg >= 10 && avg < 12)
  {
    cout << "Do you even know what that yellow thing in the sky is? Go check it out.\n";
  }
  else if (avg >= 12 && avg < 14)
  {
    cout << "My God! How Do You Waste Over Half Your Day On Your Phone?!?!?!?!?!?!?!?!?!?!?\n";
  }
  else if (avg >= 14 && avg < 16)
  {
    cout << "Do you even know what's outside?? Do you even breathe oxygen?!?!\n";
  }
  else if (avg >= 16 && avg < 18)
  {
    cout << "You'd be better off living in the Matrix. I think you should talk to a physical human being.\n";
  }
  else if (avg >= 18 && avg < 20)
  {
    cout << "Bruh, You Spent An Average of " << avg << " Hours?!?!?!?!?!?!.\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀ ⠀⢀⣀⣤⣤⠴⠶⠶⠶⠶⠶⠶⠶⠶⢤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⢀⣤⠶⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠶⣤⡀⠀⠀⠀⠀⠀\n  ⠀⠀⢀⡴⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⡄⠀⠀⠀\n  ⠀⣰⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣦⠀⠀\n  ⢰⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣧⠀ \n  ⣿⠀⠀⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡄⠀⢹⡄ \n  ⡏⠀⢰⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⢸⡇ \n  ⣿⠀⠘⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡟⠀⢸⡇  \n  ⢹⡆⠀⢹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⣾⠀\n  ⠈⢷⡀⢸⡇⠀⢀⣠⣤⣶⣶⣶⣤⡀⠀⠀⠀⠀⠀⢀⣠⣶⣶⣶⣶⣤⣄⠀⠀⣿⠀⣼⠃⠀\n  ⠀⠈⢷⣼⠃⠀⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⡇⠀⢸⡾⠃⠀⠀\n  ⠀⠀⠈⣿⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⠃⠀⢸⡇⠀⠀⠀\n  ⠀⠀⠀⣿⠀⠀⠘⢿⣿⣿⣿⣿⡿⠃⠀⢠⠀⣄⠀⠀⠙⢿⣿⣿⣿⡿⠏⠀⠀⢘⡇⠀⠀⠀\n  ⠀⠀⠀⢻⡄⠀⠀⠀⠈⠉⠉⠀⠀⠀⣴⣿⠀⣿⣷⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⢸⡇⠀⠀⠀\n  ⠀⠀⠀⠈⠻⣄⡀⠀⠀⠀⠀⠀⠀⢠⣿⣿⠀⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠘⣟⠳⣦⡀⠀⠀⠀⠸⣿⡿⠀⢻⣿⡟⠀⠀⠀⠀⣤⡾⢻⡏⠁⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠀⢻⡄⢻⠻⣆⠀⠀⠀⠈⠀⠀⠀⠈⠀⠀⠀⢀⡾⢻⠁⢸⠁⠀⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠀⢸⡇⠀⡆⢹⠒⡦⢤⠤⡤⢤⢤⡤⣤⠤⡔⡿⢁⡇⠀⡿⠀⠀⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠀⠘⡇⠀⢣⢸⠦⣧⣼⣀⡇⢸⢀⣇⣸⣠⡷⢇⢸⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠀⠀⣷⠀⠈⠺⣄⣇⢸⠉⡏⢹⠉⡏⢹⢀⣧⠾⠋⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠀⠀⠻⣆⠀⠀⠀⠈⠉⠙⠓⠚⠚⠋⠉⠁⠀⠀⠀⢀⡾⠁⠀⠀⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀\n  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠶⠦⣤⣤⣤⡤⠶⠞⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"; // Skull Text Art Used: https://emojicombos.com/skull-ascii-art
  }
  else if (avg >= 20 && avg < 22)
  {
    cout << "You're life is just phone and sleep. PLEASE, GET A JOB OR SOMETHING. FTLOG!\n";
  }
  else if (avg >= 22 && avg < 24)
  {
    cout << "HOW THE **** ARE YOU EVEN ALIVE?!?! SEEK MEDICAL AND MENTAL HELP!\n";
  }
  else if (avg = 24)
  {
    cout << "You are living in a simulation. Nothing is real anymore.\n";
  }
  else
  {
    cout << "You're beyond existence...\n";
  }
    
}