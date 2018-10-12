#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter two numbers"<<endl;
cin>>a;
cin>>b;
cout<<"minimum between a and b is"<<min(a,b)<<endl;
return 0;
}

void min(int &a,int &b)
{


if (a>b){
cout<< b; 
}

else{
cout<< a;
}
}
