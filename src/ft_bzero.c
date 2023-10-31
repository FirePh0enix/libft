#include "libft.h"

void	ft_bzero(void *p, size_t n)
{
	char	*s;
	size_t	i;

	s = p;
	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}
