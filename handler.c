/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:57:02 by mualkhid          #+#    #+#             */
/*   Updated: 2024/06/12 15:16:09 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	resize_handler(int x, int y, t_fractol *fractol)
{
	(void)x;
	(void)y;
	if (fractol->is_locked)
		return (1);
	return (0);
}

int	close_handler(t_fractol *fractol)
{
	mlx_destroy_image(fractol->mlx_connection, fractol->img.img_ptr);
	mlx_destroy_window(fractol->mlx_connection, fractol->mlx_window);
	free(fractol->mlx_connection);
	exit(EXIT_SUCCESS);
}

int	mouse_handler(int button, int x, int y, t_fractol *fractol)
{
	(void)x;
	(void)y;
	if (button == 4)
		fractol->zoom *= 0.95;
	else if (button == 5)
		fractol->zoom *= 1.05;
	fractol_render(fractol);
	return (0);
}
