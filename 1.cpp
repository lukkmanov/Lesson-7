#include <iostream>

using namespace std;

//#define mol ((y == 0) || (y <= x))

#define mow {if ((y == 0) || (y <= x)) \
cout << "The number is equal to or in the range" << endl;\
else cout << "Number is not in range" << endl;}

int main()
{
 int x,y;
 cout << "Insert the number" << endl;
 cin >> x;
 cout << "Enter the number included in the range" << endl;
 cin >> y;
 mow
// if (mol)
//     cout << "The number is equal to or in the range" << endl;
// else
//     cout << "Number is not in range" << endl;
}
