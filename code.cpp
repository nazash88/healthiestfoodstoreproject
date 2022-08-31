//Nazia Ashraf
//Program to select healthiest food store
//07/29/2021
//Program uses a function and switch structure to select menu
//Version#1

#include <iostream>
using namespace std;
int menufunction(int digit)
{
switch (digit)
{
   case 1: cout << "That’s right, Mac y Dee!" << endl; break;
   case 2: cout << "Yes, the guy with the big round head." << endl; break;
   case 3: cout << "The best salads in town." << endl; break;
   case 4: cout << "Thank you for choosing!" << endl; break;
}
return 1;
}
int main() {
  int num;
  
    cout << "Enter a number to select from menu: " << endl;
  cout << "1. McDonalds" << endl << "2. Jack in the Box" << endl <<
  "3. Soup Plantation" << endl << "4. Exit" << endl;
  cin >> num;
  int result = menufunction(num);

    return 0;
}
