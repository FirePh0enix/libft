#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((dest >= src && dest <= src + n)
		|| (dest + n >= src && dest + n <= src + n))
	{
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
