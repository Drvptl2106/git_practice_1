#include <iostream>
using namespace std;
int main()
{
  int num1,num2,sum,sub,multi,div,dividend,divisor,quo,rem,n;
  
  //printing hello world

  cout<<"\nHello world\n\n";
  cout<<"\nenter any integer: ";
  cin>>num1;
    cout<<"\nyou entered following number:"<<num1;
  cout<<"\n-----------------------------------------------------------------------------------";

  //Performing aritmatic oprations on the integers entered by user and displaying the resut


  cout<<"\nEnter any number1 : ";
  cout<<"\nEnter any number2 : ";

  cin>>num1>>num2;
  sum=num1+num2;
  sub=num1-num2;
  multi=num1*num2;
  div=num1/num2;

cout<<"\n\n1.Additon of "<<num1<<" & "<<num2<<" is: "<<sum;
cout<<"\n\n2.Subtraction of "<<num1<<" & "<<num2<<" is: "<<sub;
cout<<"\n\nM3.ultiplication of "<<num1<<" & "<<num2<<" is: "<<multi;
cout<<"\n\nd4.devision of "<<num1<<" & "<<num2<<" is: "<<div;
cout<<"\n-----------------------------------------------------------------------------------";

//Finding quatient and reminder of integers entered by user

cout<<"\n\ndividend: ";
cin>>dividend;
cout<<"\nEnter divisor: ";
cin>>divisor;
quo=dividend/divisor;
rem=dividend%divisor;
cout<<"\ndividend of: "<< dividend<<" & "<<divisor<<" is:"<< quo;
cout<<"\nRemainder of: "<< dividend<<" & "<<divisor<<" is:"<< rem;
cout<<"\n----------------------------------------------------------------------------------";

//Finding size of int,float.double and char in 30your system

cout<<"\n\nsize of char is: "<<sizeof(char)<<"bytes"<<endl;
cout<<"\nsize of int is: "<<sizeof(int)<<"bytes"<<endl;
cout<<"\nsize of float:"<<sizeof(float)<<"bytes"<<endl;
cout<<"\n-----------------------------------------------------------------------------------";

//swaping two numbers

int a,b,temp;
 cout<<"\nEnter the values of a";
  cout<<"\nEnter the values of b";
 cout<<"a="<<a<<"\nb="<<b<<endl;
 temp=a;
 a=b;
 b=temp;
cout<<"\n after swaping"<<endl;
cout<<"a="<<a<<"\nb="<<b<<endl;
cout<<"\n-----------------------------------------------------------------------------------";

//Testing wheter number is even or odd

cout<<"\n\nEnter any number"<<endl;
cin>>n;
if(n%2==0)
  cout<<"Its a even number";
else
  cout<<"Its a odd number";
  cout<<"\n-----------------------------------------------------------------------------------";

char c,a,e,i,o,u;
cout<<"enter any charter of your choice";
cin>>c;
if(c==a,e,i,o,u);
cout<<"its a vowel";
else:
cout<<"its a charter";

return 0;

}