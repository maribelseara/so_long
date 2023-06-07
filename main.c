# include "so_long.h"

int main(void)
{
    void    *mlx;
    void    *mlx_win;

    mlx = mlx_init();
    if (!mlx)
        return (1);
    mlx_win = mlx_new_window(mlx, 800, 600, "Hello World");
    if (!mlx_win)
        return (2);
    mlx_loop(mlx);
    return (0);
}