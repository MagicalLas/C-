int main()
{
	int arr[10000];
	int n,n_;
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d", &n_);
	for (size_t i = 0; i < n_; i++)
	{
		int t,j;
		scanf("%d%d", &t, &j);
		for (size_t k = 0; k < n; k++)
		{
			if (((k + 1) % j == 0)&&(t==1)) {
				arr[k] == 1 ? arr[k] = 0 : arr[k] = 1;
			}
		}

	}
    return 0;
}