#include "../includes/so_long.h"

int	main(int ac, char** av)
{
	//t_vars	*mlx_vars;
	//t_data	*img;
	char	**map;

	//mlx_vars = NULL;
	//img = NULL;

	if (ac == 2)
	{
		map = parse_map(av[1]);
		//init_window(mlx_vars, img);
	}
	return (0);
}
