#include"libft.h"

static size_t	ft_sublen(const char *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (i >= start && size < len)
			size++;
		i++;
	}
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;
	size_t	a;
	size_t	b;

	size = ft_sublen(s, start, len);
	str = (char *)malloc(sizeof(*s) * (size + 1));
	if (!str)
		return (NULL);
	a = 0;
	b = 0;
	while (s[a])
	{
		if (a >= start && b < len)
		{
			str[b] = s[a];
			b++;
		}
		a++;
	}
	str[b] = '\0';
	return (str);
}
