#include <iostream>
using namespace std;
void add(int&,int&,int&);
int main()
{
cout <<"enter two numbers"<<endl;
int a,b,c;
cin>> a;
cin>> b;
add(a,b,c);
cout<< "sum is"<<c<<endl;
return 0;
}
void add(int& a,int& b,int& c)
{
  c=a+b;
}
