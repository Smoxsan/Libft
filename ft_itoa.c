char *ft_itoa(int n)
{
	int num;
	int count;
	char *result;

	num = n;
	count = 0;
	while(num >= 10)
	{
		num = num/10;
		count++;
	}
	result = malloc((count +1)*(sizeof(char)));
	result[count] = "/0";
	while(n >= 10)
	{
		result[count--] = n/10;
	}
}