#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int fun(unsigned int s)
{
    int i=0;
    int number=0;
    int sum=0;
    int count=0;
    char str[10];
    sprintf (str, "%d" ,s);
    while (s!=0)
    {
        s=s/10;
        count++;
    }
    for (i=0;i<=count;i++)
    {
        if (str[i]%2==0)
        {
            number++;
            cout <<str[i];
        }
    }
    for (int j=number;0<j;j--)
    {
        sum =sum+str[i]*pow(10,j-1);
    }
    return 0;
}
int main()
{
     unsigned int s_1;
    cout <<"ÇëÊäÈëÊı£º";
    cin>>s_1;
    int result=fun(s_1);
    cout <<result<<endl;
    return 0;
}