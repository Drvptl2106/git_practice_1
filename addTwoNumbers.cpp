#include <iostream>

using namespace std;

int main()
{
  int num1, num2, sum, sub, multi, div;
  cout<<"\nEnter any number1: ";
  cout<<"\nEnter any number2: ";
  cin>>num1>>num2;
  sum = num1 + num2;
  sub = num1 - num2;
  multi = num1 * num2;
  div = num1 / num2;
  cout<<"\n\n1.Additon of "<<num1<<" & "<<num2<<" is: "<<sum;
  cout<<"\n\n2.Subtraction of "<<num1<<" & "<<num2<<" is: "<<sub;
  cout<<"\n\n3.Multiplication of "<<num1<<" & "<<num2<<" is: "<<multi;
  cout<<"\n\nd4.devision of "<<num1<<" & "<<num2<<" is: "<<div;
}