/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:57:35 by ngontjar          #+#    #+#             */
/*   Updated: 2019/11/15 15:04:16 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	// char	***pieces;
	char	*pieces[26];
	int		piece_count;

	if (argc == 2)
	{
		int fd = open(argv[1], O_RDONLY);
		if (fd > 0)
		{
			piece_count = validate(fd, pieces, argv[1]);
			ft_putendl(ft_itoa(piece_count));
			if (piece_count <= 0)
			{
				ft_putendl("ERROR\n");
				return (1);
			}
			// pieces = input_read(fd);

			ft_putendl("MORE");
			t_piece *array[2];
			array[0] = make_piece(pieces[0], 'A');
			array[1] = make_piece(pieces[1], 'B');

			int size = 4;
			char map[size][size];
			ft_memset(map, '.', size*size);

			char **solution = smallest_square(NULL, size, array, 2);

			int y = 0;
			while (y < 4)
			{
				printf("%s\n", map[size]);
			}
			// t_piece *temp = make_piece(pieces[0]);
			// int x = 0;
			// while (y < 4)
			// {
			// 	while (x < 4)
			// 	{
			// 		if (temp->coords[x][y])
			// 			ft_putchar('#');
			// 		else
			// 			ft_putchar('.');
			// 		++x;
			// 	}
			// 	ft_putchar('\n');
			// 	x = 0;
			// 	++y;
			// }

			//ft_putendl("????");
			// int x = 0;
			// while (x < piece_count)
			// {
			// 	//printf("%s\n", pieces[x++]);
			// 	x++;
			// }
		}
	}
}
