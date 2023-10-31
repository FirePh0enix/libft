#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*sdest;
	const char	*ssrc;

	i = 0;
	sdest = dest;
	ssrc = src;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return sdest;
}
