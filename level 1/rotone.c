/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:53:18 by leaugust          #+#    #+#             */
/*   Updated: 2024/09/03 17:06:35 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
		int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] == 90 || av[1][i] == 122)
				av[1][i] -= 25;
			else if ((av[1][i] >= 65 && av[1][i] <= 89) || (av[1][i] >= 95
					&& av[1][i] <= 121))
				av[1][i] += 1;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
