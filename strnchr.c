#include <stdio.h>

char	*strnchr(char *s, int c, int orda)
{
	int i = 0;
	while(orda > 0)
	{
		if(s[i] == c)
		{
			orda--;
		}
		i++;
	}
	return (s + i - 1);
}
int main()
{
	char *str = "abracadabra";
	char *str1;

	str1 = strnchr(str, 'a', 2);
	printf("%s\n",str1);
}