#include <iostream>
using namespace std;
int add(int,int);
int main()
{
cout <<"enter two numbers"<<endl;
int a,b,c;
cin>> a;
cin>> b;
c=add(a,b);
cout<< "sum is"<<c<<endl;
return 0;
}
int add(int x,int y)
{
  return (x+y);
}

