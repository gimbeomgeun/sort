//#include <stdio.h>
//int main()
//{
//    int iary[10] = { 2,5,1,4,7,2,1,9,10,32 };
//    for (int i = 0; i < sizeof(iary) / sizeof(int) - 1; i++)
//    {
//        for (int j = 0; j < sizeof(iary) / sizeof(int) - 1 - i; j++)
//        {
//            if (iary[j] > iary[j + 1])
//            {
//                int tmp;
//                tmp = iary[j], iary[j] = iary[j + 1], iary[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < sizeof(iary) / sizeof(int); i++)
//    {
//        printf("%d ", iary[i]);
//    }
//    return 0;
//}


#include <stdio.h>
int main()
{
	int iary[5] = { 3,5,1,4,2 };
	for (int i = 0; i < 5; i++)
	{
		int max = 0;
		int max_index;
		for (int j = 0; j < 5-i; j++)
		{
			if (max < iary[j])
			{
				max = iary[j];
				max_index = j;
			}
		}
		int tmp;
		tmp = iary[5 - 1 - i], iary[5 - 1 - i] = iary[max_index], iary[max_index] = tmp;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", iary[i]);
	}
	return 0;
}
