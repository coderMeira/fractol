
#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdio.h>
# include "../libs/libft/inc/libft.h"

typedef struct	s_element
{
	int		*pos;
	t_bool	is_set;
}				t_element;

typedef struct	s_c_list
{
	int				*pos;
	struct s_c_list	*next;
}				t_c_list;

typedef struct	s_environment
{
	t_element	*P;
	t_element	*E;
	t_c_list	*C;
	char		**map;
	int			c_count;
	int			mov_count;
	int			map_size;
}				t_environment;


typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

t_element		*init_element(int j, int k, t_environment *env);
t_environment	*init_env(void);
t_c_list		*init_C_elem(t_environment *env, int j, int k);
void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
void			init_window(t_vars *mlx_vars, t_data* img);

void	add_to_C(t_c_list *C, t_environment *env, int j, int k)

char**			parse_map(char* ber, t_environment*	env);
int 			get_next_line(int fd, char **line);

#endif
