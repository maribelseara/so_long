/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:58:59 by mseara            #+#    #+#             */
/*   Updated: 2023/06/12 11:59:08 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_window    ft_new_instance(int width, int height, char *str)
{
    void    *mlx_ptr;

    mlx_ptr = mlx_init();
    return ((t_window) {mlx_ptr, mlx_new_window(mlx_ptr, width, height, str), width, height});
}
