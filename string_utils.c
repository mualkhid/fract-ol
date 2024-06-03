/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:58:09 by mualkhid          #+#    #+#             */
/*   Updated: 2024/06/03 20:58:10 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "events.h"
#include "fractol.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
	{
		return ;
	}
	write(fd, s, ft_strlen(s));
}

double	atodbl(char *s)
{
	long	integer_part;
	double	fractional_part;
	double	pow;
	int		sign;

	integer_part = 0;
	fractional_part = 0;
	pow = 1;
	sign = +1;
	while ((*s >= 9 && *s <= 13) || 32 == *s)
		s++;
	while ('+' == *s || '-' == *s)
		if ('-' == *s++)
			sign = -sign;
	while (*s != '.' && *s)
		integer_part = (integer_part * 10) + (*s++ - 48);
	if ('.' == *s)
		++s;
	while (*s)
	{
		pow /= 10;
		fractional_part = fractional_part + (*s++ - 48) * pow;
	}
	return ((integer_part + fractional_part) * sign);
}
