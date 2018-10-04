# include <iostream>
using namespace std;
int max(int,int);
int main()
{
int a,b;
cout<<"Enter two numbers.";
cin>>a;
cin>>b;
int c=max(a,b);
cout<<"bigger number"<<c<<endl;
return 0;
}
int max(int x,int y)
{
if (x>y)
return x;
else 
return y;
}


