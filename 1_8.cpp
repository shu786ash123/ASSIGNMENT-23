#include<iostream>
using namespace std;
int main()
{
       int a,b;
       cout<<"ENTER TWO NUMBER:  ";
       cin>>a>>b;
       a=a+b;
       b=a-b;
       a=a-b;
       cout<<"swapping value is "<< a << " and " <<  b ;
       return 0;

}
