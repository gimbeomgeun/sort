#include <stdio.h>
int main()
{
    int iary[10] = { 2,5,1,4,7,2,1,9,10,32 };
    for (int i = 0; i < sizeof(iary) / sizeof(int) - 1; i++)
    {
        for (int j = 0; j < sizeof(iary) / sizeof(int) - 1 - i; j++)
        {
            if (iary[j] > iary[j + 1])
            {
                int tmp;
                tmp = iary[j], iary[j] = iary[j + 1], iary[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < sizeof(iary) / sizeof(int); i++)
    {
        printf("%d ", iary[i]);
    }
    return 0;
}