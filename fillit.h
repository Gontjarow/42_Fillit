/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:09:27 by ngontjar          #+#    #+#             */
/*   Updated: 2019/11/20 15:35:02 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "get_next_line.h"

typedef struct	s_piece
{
	char			letter;
	int				coords[4][4];
	unsigned int	width;
	unsigned int	height;
	struct	s_piece	*next;
}				t_piece;

typedef struct	s_xy
{
	int		x;
	int		y;
}				t_xy;

char	***input_read(int fd);
char	**smallest_square(char **map2D, int size, t_piece *lst, int same_size);
void	show_output(char **square);
int		validate(int fd, char **out, char *file);
char	*validate_piece(char *array[4]);
int		validate_file(int fd);
t_piece	*make_piece(char *str, char letter);
char	**make_grid(int size);
char	**copy_grid(char **smaller, int size, int same_size);
void	ft_piece_add_back(t_piece *head, t_piece *new);
int		empty(char **map2D, t_xy pos, int size, t_piece *tet);
void	put(char **map2D, t_xy pos, t_piece *tet);
void	rip(char **map2D, t_xy pos, t_piece *tet);

#endif
