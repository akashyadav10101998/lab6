# include <iostream>
using namespace std;
int sub(int , int);
int main()
{
int a,b,c;
cout<<"enter two num"<<endl;
cin>> a;
cin>> b;
c=sub(a,b);
cout<<"result is"<<c<<endl;
return 0;
}
int sub(int x,int y)
{
return (x-y);
}
