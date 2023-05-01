#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("cuantos caracteres hay? %i\n", ft_strlen("cuantos caracteres hay?"));
	printf("ft_isalpha si - 1 no - 0: caracteres %i\n", ft_isalpha("caracteres"));
	printf("ft_isalpha si - 1 no - 0: 895989  %i \n", ft_isalpha("895989"));
	printf("ft_isalpha si - 1 no - 0: vacio %i\n", ft_isalpha(""));
	printf("ft_isalnum si - 1 no - 0: espacio %i\n", ft_isalnum(" "));
	printf("ft_isalnum si - 1 no - 0: palabra %i\n", ft_isalnum("palabra"));
	printf("ft_isalnum si - 1 no - 0: vacio %i \n", ft_isalnum(""));
	printf("ft_isdigit si - 1 no - 0: 898989 %i \n", ft_isdigit("898989"));
	printf("ft_isdigit si - 1 no - 0: palabra %i \n", ft_isdigit("palabra"));
	printf("ft_isdigit si - 1 no - 0: vacio %i \n", ft_isdigit(""));
	return (0);
}
