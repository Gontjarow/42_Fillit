/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:57:35 by ngontjar          #+#    #+#             */
/*   Updated: 2019/11/08 17:58:30 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char ***pieces;
	if (argc == 2)
	{
		int fd = open(argv[1], O_RDONLY);
		if (fd > 0)
			pieces = input_read(fd);
		// ft_putendl("oh no");
		// printf("%c\n", pieces[0][0][0]);

		// ft_putendl("oh no");
		// int x = 0;
		// int y = 0;
		// while (x < 4)
		// {
		// 	while (y < 4)
		// 	{
		// 		// printf("%s\n", pieces[x][y]);
		// 		++y;
		// 	}
		// 	++x;
		// 	y = 0;
		// }
	}
}