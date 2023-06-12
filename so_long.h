/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:16:57 by mseara            #+#    #+#             */
/*   Updated: 2023/06/12 11:50:00 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./libft/libft.h"
# include <limits.h>
# include "./mlx/mlx.h"

typedef struct s_window
{
    void    *mlx_ptr;
    void    *win_ptr;
    int     height;
    int     width;
}   t_window;

t_window    ft_new_instance(int width, int height, char *str);

#endif
