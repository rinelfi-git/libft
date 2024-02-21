/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:48:27 by erijania          #+#    #+#             */
/*   Updated: 2024/02/21 09:05:15 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	is_lower;
	int	is_upper;
	int	is_digit;

	is_lower = c >= 'a' && c <= 'z';
	is_upper = c >= 'A' && c <= 'Z';
	is_digit = c >= '0' && c <= '9';
	return (is_lower || is_upper || is_digit);
}
