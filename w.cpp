# include <iostream>
using namespace std;
int min(int,int);
int main()
{
int a,b,c;
cout << "enter two numbers"<< endl;
cin >> a;
cin >> b;
c=min(a,b);
cout<<"minimum number is"<<c<<endl;
return 0;
}
int min(int x,int y)
{
if(x<y)
return x;
else
return y;
}
