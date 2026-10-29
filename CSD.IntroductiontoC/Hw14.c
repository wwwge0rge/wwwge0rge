#include <stdio.h>

int main()
{
    int messages;
    char plan;
    int plan2;
    float cost = 0;
    scanf("%d %c", &messages, &plan);
    if (plan == 'A')
    {
        plan2 = 1;
    }
    else if (plan == 'B')
    {
        plan2 = 2;
    }
    else if (plan == 'C')
    {
        plan2 = 3;
    }
    else
    {
        plan2 = 4;
    }
    switch (plan2)
    {
    case 1:
        cost = messages / 10.0;
        break;
    case 2:
        if (messages > 100)
        {
            cost = (messages - 100) * 0.08;
        }
        cost = cost + 5;
        break;
    case 3:
        cost = 15;
        break;
    }
    if (plan2 != 4)
    {
        printf("%.2f", cost);
    }
    else
        printf("Unknown package");

    return 0;
}
