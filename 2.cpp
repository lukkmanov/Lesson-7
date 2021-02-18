#include <iostream>

using namespace std;

#define raz  int *mas = &array[2][0]; \
cout << *mas << endl;

int main()
{
   int array[3][3];
   for (int i = 0 ; i < 3; i++)
   {
               for (int y = 0 ; y < 3 ; y++)
               {
            array[i][y] = (rand() % 10);
                    cout << array[i][y];
               }
               cout << endl;
    }
   raz  
   return 0;
}
