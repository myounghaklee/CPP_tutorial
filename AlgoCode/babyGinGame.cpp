#include <stdio.h>

int main()
{
    int testcase;
    int card[6] = {
        0,
    };
    int input;
    int run, triple;

    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        scanf("%d", &input);
    }
    for (int i = 0; i < 6; i++)
    { //각 자리수 counting
        card[(input % 10)]++;
        input /= 10;
    }

    for (int j = 0; j < 10; j++)
    {
        if (card[j] > 2)
        {
            card[j] = card[j] - 3;
            triple += 1;
            j--;
        }
        if (card[j] > 0 && card[j + 1] > 0 && card[j + 2] > 0)
        {
            card[j] -= 1;
            card[j + 1] -= 1;
            card[j + 2] -= 1;
            run += 1;
            j--;
        }
    }
    if ((run + triple) == 2)
        printf("baby gin");
    else
    {
        printf("lose");
    }
    return 0;
}