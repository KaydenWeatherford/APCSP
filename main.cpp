#include <iostream>
using namespace std;

int main()
{
   int A,B,C,D,sum;
    float average;

    cout << "Enter 4 Numbers : " << endl;
    cin >> A >> B >> C >> D;
    sum = A + B + C + D;
    average=sum/4;
    cout << "The sum of " << A << " , " << B << " , " << C << " , " << D << " is " << sum << "." << endl;
    cout << "The average of the numbers is " << average << "." << endl;
    return 0;
}