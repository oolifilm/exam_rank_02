/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:41:26 by leaugust          #+#    #+#             */
/*   Updated: 2024/09/03 16:42:09 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	unisgned int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] == 32 || av[1][i] == 9)
			i++;
		while ((av[1][i] != 32 && av[1][i] != 9) && av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
