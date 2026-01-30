/*
structs/enums/typedefs only
no function prototypes here
*/

#ifndef TYPES_H
# define TYPES_H

typedef struct s_map
{
	char	**grid;			/* 2D map layout: array of strings */
	int		width;			/* max row length (columns) */
	int		height;			/* number of rows */
}	t_map;

typedef struct s_player
{
	double	pos_x;			/* player position X in map units */
	double	pos_y;			/* player position Y in map units */
	double	dir_x;			/* direction vector X */
	double	dir_y;			/* direction vector Y */
	double	plane_x;		/* camera plane X (for raycasting) */
	double	plane_y;		/* camera plane Y (for raycasting) */
}	t_player;

typedef struct s_config
{
	char	*path_nw;		/* texture path: North wall */
	char	*path_sw;		/* texture path: South wall */
	char	*path_ww;		/* texture path: West wall */
	char	*path_ew;		/* texture path: East wall */
	//int		floor_rgb;		/* floor color packed as 0xRRGGBB */
	//int		ceil_rgb;		/* ceiling color packed as 0xRRGGBB */
}	t_config;

typedef	struct s_graphics
{
	//array of sprites
	//array of textures
	//floor and ceiling colors 
}	t_graphics;


typedef struct s_mlx
{
	void	*mlx_content;	/* MLX context handle */
	void	*mlx_window;	/* MLX window handle */
	void	*mlx_image;		/* MLX image buffer handle */
	int		window_w;		/* window width */
	int		window_h;		/* window height */
}	t_mlx;

typedef struct s_game
{
	t_mlx		mlx;		/* MLX handles + screen size */
	t_graphics	graphics;
	t_config	config;		/* parsed config/paths/colors */
	t_map		map;		/* map grid and dimensions */
	t_player	player;		/* player position and camera */
}	t_game;

#endif
