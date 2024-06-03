/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:57:08 by mualkhid          #+#    #+#             */
/*   Updated: 2024/06/03 20:57:09 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EVENTS_H
# define EVENTS_H

# include "fractol.h"

extern int	key_handler(int keysym, t_fractol *fractal);
extern int	mouse_handler(int button, int x, int y, t_fractol *fractol);
extern int	close_handler(t_fractol *fractal);
extern int	julia_track(int x, int y, t_fractol *fractal);

#endif
