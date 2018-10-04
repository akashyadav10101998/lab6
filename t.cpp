# include <iostream>
using namespace std;
void sub(int& , int& ,int&);
int main()
{
int a,b,c;
cout<<"enter two num"<<endl;
cin>> a;
cin>> b;
sub(a,b,c);
cout<<"result is"<<c<<endl;
return 0;
}
void sub(int& a,int& b, int& c)
{
 c = a-b;
}
