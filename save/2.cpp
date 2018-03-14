int main()
{
	int a, b, count;
	scanf("%d%d", &a, &b);
	while (true)
	{
		int ta, tb=0;
		if (ta != 1) {
			ta = a / 2;
			count++;
		}
		if (ta == b) {
			break;
		}
		if (ta == tb) {
			break;
		}
		if (tb != 1) {
			tb = b / 2;
			count++;
		}
		if (ta == tb) {
			break;
		}

	}
	printf("%d", count);
    return 0;
}

