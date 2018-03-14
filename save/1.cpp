int main()
{
	int arr[9][9];
	int max[3] = {0,0,0};
	for (size_t i = 0; i < 9; i++)	
	{
	for (size_t j = 0; j < 9; j++)
	{
		scanf("%d", &arr[i][j]);
	}
}


	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			if (arr[i][j] > max[0]) 
			{
				max[0] = arr[i][j];
				max[1] = i;
				max[2] = j;
			}
		}
	}
	printf("%d\n%d %d", max[0], max[1]+1, max[2]+1);
}

