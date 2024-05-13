#include <iostream>
#include <list>
#include <string>
#include <array>
#include <cmath>
#include <ctime>
#include <vector>
#include <bits/stdc++.h> 
#include <tuple>
#include <stdio.h>
#include <time.h>
using namespace std;

// g++ -o "MSOE_2018_7.exe" "Assignments/MSOE_2018_7.cpp" && ./"MSOE_2018_7.exe"

// Function provided by GeeksForGeeks, Modified by Me slightly
// https://www.geeksforgeeks.org/convert-unix-timestamp-to-dd-mm-yyyy-hhmmss-format/
string unixTimeToHumanReadable(long int seconds) 
    {
    
    string ans = "";
    string ampm = "";
    int daysOfMonth[] = { 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };
    
    long int currYear, daysTillNow, extraTime, extraDays,
        index, date, month, hours, minutes, secondss,
        flag = 0;
    
    daysTillNow = seconds / (24 * 60 * 60);
    extraTime = seconds % (24 * 60 * 60);
    currYear = 1970;
    
    while (true) {
        if (currYear % 400 == 0
            || (currYear % 4 == 0 && currYear % 100 != 0)) {
            if (daysTillNow < 366) {
                break;
            }
            daysTillNow -= 366;
        }
        else {
            if (daysTillNow < 365) {
                break;
            }
            daysTillNow -= 365;
        }
        currYear += 1;
    }
    extraDays = daysTillNow + 1;
    
    if (currYear % 400 == 0
        || (currYear % 4 == 0 && currYear % 100 != 0))
        flag = 1;
    
    month = 0, index = 0;
    if (flag == 1) {
        while (true) {
    
            if (index == 1) {
                if (extraDays - 29 < 0)
                    break;
                month += 1;
                extraDays -= 29;
            }
            else {
                if (extraDays - daysOfMonth[index] < 0) {
                    break;
                }
                month += 1;
                extraDays -= daysOfMonth[index];
            }
            index += 1;
        }
    }
    else {
        while (true) {
    
            if (extraDays - daysOfMonth[index] < 0) {
                break;
            }
            month += 1;
            extraDays -= daysOfMonth[index];
            index += 1;
        }
    }
    
    if (extraDays > 0) {
        month += 1;
        date = extraDays;
    }
    else {
        if (month == 2 && flag == 1)
            date = 29;
        else {
            date = daysOfMonth[month - 1];
        }
    }
    hours = extraTime / 3600;
    minutes = (extraTime % 3600) / 60;
    secondss = (extraTime % 3600) % 60;
    
    ans += to_string(month);
    ans += "/";
    ans += to_string(date);
    ans += "/";
    ans += to_string(currYear);
    ans += " ";

    if(hours > 12)
    {
        hours = hours - 12;
        ans += to_string(hours);
        ans += ":";
        ampm = "PM";
    }
    else
    {
        ans += to_string(hours);
        ans += ":";
        ampm = "AM";
    }
    ans += to_string(minutes);
    ans += ":";
    ans += to_string(secondss);
    ans += ampm;
    return ans;
    }

int main()
{
    long int Time;
    cout << "Enter the time in seconds since January 1, 1970: \n";
    cin >> Time;
    string Output = unixTimeToHumanReadable(Time);
    cout << "The new date is: " << Output << "\n";

    return 0;
}