#include <stddef.h>
#include <stdio.h>

static size_t	strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *strnrchr(char *s, int c, int n)
{
	int i = strlen(s);
	while(n > 0)
	{
		if (s[i] == c)
			n--;
		i--;
	}
	return (s + i + 1);
}
int main()
{
	char *str = "abracadabra";
	char *str1;

	str1 = strnrchr(str, 'a', 2);
	printf("%s\n",str1);
}
