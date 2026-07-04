#include<stdio.h>

int main()
{
    int owed;
    // we have 1$ bill, 5$ bill, 10$ bill, 25$ bill
    do{
        printf("Change owed: ");
        scanf("%d", &owed);
    } while (owed < 0 || owed>=100);
    int coins_25 = 0;
    int coins_10 = 0;
    int coins_5 = 0;
    int coins_1 = 0;
    if (owed >= 25)
    {
        coins_25 = owed / 25;
        owed =  owed - coins_25*25;
        if (owed<25 && owed>=10)
        {
            coins_10 = owed / 10;
            owed =  owed - coins_10*10;
            if (owed<10 && owed>=5)
            {
                coins_5 = owed / 5;
                owed =  owed - coins_5*5;
                if(owed<5 && owed>=0)
                {
                    coins_1 = owed ;
                }
            }
        }
    }
    if (owed<25 && owed>=10)
    {
        coins_10 = owed / 10;
        owed =  owed - coins_10*10;
        if (owed<10 && owed>=5)
        {
            coins_5 = owed / 5;
            owed =  owed - coins_5*5;
            if(owed<5 && owed>=0)
            {
                coins_1 = owed ;
            }
        }
    }
    if (owed<10 && owed>=5)
    {
        coins_5 = owed / 5;
        owed =  owed - coins_5*5;
        if(owed<5 && owed>=0)
        {
            coins_1 = owed ;
        }
    }
    if(owed<5 && owed>=0)
    {
        coins_1 = owed ;
    }
    printf("%i",coins_1 + coins_5 + coins_10 + coins_25);
}