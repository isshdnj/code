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
                cout <<"����"<<rooster_amount<<"ֻ,ĸ"<<hen_amount<<"ֻ,��"<<chick_amount<<"ֻ"<<endl;
                n++;
            }
        }
    }
    cout<<"���򷽰���������"<<n<<endl;
    return 0;
}