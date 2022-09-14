#include<stdio.h>

int main()
{
    int day;
    printf("enter day:");
    scanf("%d",&day);

    switch(day)
    {
        case 1:printf("monday\n");
        break;

        case 2:printf("tuesday\n");
        break;

        case 3:printf("wensday\n");
        break;

        case 4:printf("thursday\n");
        break;

        case 5:printf("friday\n");
        break;

        case 6:printf("staturday\n");
        break;

        case 7:printf("sunday\n");
        break;

        default : printf("not valid\n");
    }

    /*if(day==1)
    {
        printf("Monday\n");
    }

    else if(day==2)
    {
        printf("tuesday\n");
    }

    else if(day==3)
    {
        printf("Wensday\n");
    }

    else if(day==4)
    {
        printf("thursday\n");
    }

    else if(day==5)
    {
        printf("friday\n");
    }

    else if(day==6)
    {
        printf("saturday\n");
    }

    else if(day==7)
    {
        printf("sunday\n");
    }

    else
    {
        printf("not valid\n");
    }*/
    return 0;
}
