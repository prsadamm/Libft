#include "libft.h"
#include<stdio.h>

int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	j = i;
	while (s1[j])
		j++;
	while (j && ft_isset(s1[j - 1], set) && j > i)
		j--;
	dest = malloc(sizeof(char) * ((j - i) + 1));
	if (!(dest))
		return (NULL);
	ft_strlcpy(dest, &s1[i], ((j - i) + 1));
	return (dest);
}
