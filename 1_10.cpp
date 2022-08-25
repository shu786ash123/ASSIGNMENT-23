#include<iostream>
using namespace std;
int main()
{
       int a[10],i,sum=0;
       cout<<"ENTER 10 NUMBER:  "<<endl;
       for(i=0;i<10;i++){
              cin >> a[i];}
              for(i=0;i<10;i++){
              sum = sum+a[i];
              }
         cout<<"SUM OF ALL THE NUMBERS OF ARRAY OF SIZE 10 is:  " << sum;
  return 0;
}
