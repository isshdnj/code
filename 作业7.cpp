#include <iostream>
using namespace std;
int main()
{
    int a[4][5]={{1,5,3,4,2},{6,8,7,10,9},{11,13,15,12,14},{19,20,18,16,17}};
    int i,j;
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            if (i%2==0)
            {
                int k;
                for (k=0;k<4;k++)
                {
                    if (a[i][k]>a[i][k+1]) 
                    {
                        int temp=a[i][k];
                        a[i][k]=a[i][k+1];
                        a[i][k+1]=temp;
                    }
                }
            }
            else if (i%2==1)
            {
                int k;
                for (k=0;k<4;k++)
                {
                    if (a[i][k]<a[i][k+1])
                    {
                        int temp=a[i][k];
                        a[i][k]=a[i][k+1];
                        a[i][k+1]=temp;
                    }
                }
            }
            if (i<2)
            {
                cout << a[i][j] <<"  ";
            }
            else if(2<=i&&i<4)
            {
                cout <<a[i][j]<<" ";
            }
        }
        cout <<endl;
    }
    return 0;
}