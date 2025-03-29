#include <iostream>
using namespace std;

void addTwoNumbers(int a, int b)
{
   cout << "The sum of " << a<< " and " << b<< " is: " << a + b<< endl;
}

int main()
{
  int num1 = 5;
  int num2 = 10;
 
  addTwoNumbers(num1,num2);
  return 0;
}