# include "so_long.h"

int main(void)
{
    t_window win;

    win = ft_new_instance(300,300,"So Long");
    if (!win.mlx_ptr || !win.win_ptr)
        return (1);
    mlx_loop(win.mlx_ptr);
    return (0);
}