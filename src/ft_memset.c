#include "libft.h"

void	*ft_memset(void *p, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = p;
	i = 0;
	while (i < n)
	{
		s[i] = (char) c;
		i++;
	}
	return p;
}
