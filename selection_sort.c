#include <stdio.h>
int main()
{
	int iary[5] = { 3,5,1,4,2 };
	for (int i = 0; i < 5; i++)
	{
		int max = 0;
		int max_index;
		for (int j = 0; j < 5 - i; j++)
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