#include <iostream>
using namespace std;
int main()
{
    int n=0;
    for (int rooster_amount=0;rooster_amount<=20;rooster_amount++)
    {
        for (int hen_amount=0;hen_amount<=33;hen_amount++)
        {
            int chick_amount=100-rooster_amount-hen_amount;
            if(chick_amount%3==0&&chick_amount/3+rooster_amount*5+hen_amount*3==100)
            {
                cout <<"鸡翁"<<rooster_amount<<"只,母"<<hen_amount<<"只,雏"<<chick_amount<<"只"<<endl;
                n++;
            }
        }
    }
    cout<<"购买方案的总数："<<n<<endl;
    return 0;
}