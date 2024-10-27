#include <stdio.h>

char	*strnchr(char *s, int c, int n)
{
	int i = 0;
	while(n > 0)
	{
		if(s[i] == c)
		{
			n--;
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
