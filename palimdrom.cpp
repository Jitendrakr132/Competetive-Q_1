#include<iostream>
using namespace std;
int palimdrom(int);
int main()
{
    int x=121;
    if(palimdrom(x))
    {
        cout<<"1";
    }
    else
        cout<<"0";
    return 0;

}
int palimdrom(int x)
{
int r=0,s=0,temp=x;
while(temp!=0)
{
    r=temp%10;
    s=s*10+r;
    temp=temp/10;
}
   if(s==x)
    return 1;
    else
    return 0;
}
