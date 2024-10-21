void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *s1;

	unsigned char *s2;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dest;
	if(!dest && !src)
		return(dest);
	while(n != 0)
	{
		s2 = s1;
		s1++;
		s2++;
		n--;
	}
	return(dest);
}