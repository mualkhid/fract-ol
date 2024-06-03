/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:57:52 by mualkhid          #+#    #+#             */
/*   Updated: 2024/06/03 20:57:53 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "events.h"
#include "fractol.h"

double	map(double uns_num, t_mappingrange range)
{
	return ((uns_num - range.o_min) * (range.n_max - range.n_min) / (range.o_max
			- range.o_min) + range.n_min);
}

t_complex	sum_complex(t_complex z1, t_complex z2)
{
	t_complex	result;

	result.x = z1.x + z2.x;
	result.y = z1.y + z2.y;
	return (result);
}

t_complex	square_complex(t_complex z)
{
	t_complex	result;

	result.x = (z.x * z.x) - (z.y * z.y);
	result.y = 2 * z.x * z.y;
	return (result);
}