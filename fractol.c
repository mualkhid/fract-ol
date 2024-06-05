/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:57:20 by mualkhid          #+#    #+#             */
/*   Updated: 2024/06/03 20:57:21 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int ac, char **av)
{
	t_fractol	fractal;

	if (2 == ac && !ft_strncmp(av[1], "mandelbrot", 10))
	{
		fractal.name = av[1];
		fractal_init(&fractal);
		fractol_render(&fractal);
		mlx_loop(fractal.mlx_connection);
	}
	else if (4 == ac && !ft_strncmp(av[1], "julia", 5))
	{
		fractal.name = av[1];
		if (!check_julia_parameters(&fractal, av))
			exit(EXIT_FAILURE);
		fractal_init(&fractal);
		fractol_render(&fractal);
		mlx_loop(fractal.mlx_connection);
	}
	else
	{
		ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
