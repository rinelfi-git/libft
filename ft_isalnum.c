#include "libft.h"

int	ft_isalnum(char c)
{
	int	is_lower;
	int	is_upper;
	int	is_digit;

	is_lower = c >= 'a' && c <= 'z';
	is_upper = c >= 'A' && c <= 'Z';
	is_digit = c >= '0' && c <= '9';
	return (is_lower || is_upper || is_digit);
}
