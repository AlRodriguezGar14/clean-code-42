/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodrigu <arodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:19:16 by arodrigu          #+#    #+#             */
/*   Updated: 2024/01/17 23:30:31 by arodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_isupper(char c)
{
	return (c > 0x40 && c < 0x5b);
}

int	camel_to_snake(char **argv)
{
	while (**argv)
	{
		if (ft_isupper(0[0[argv]]))
		{
			write(1, "_", 1);
			write(1, &(char){**argv + 0x20}, 1);
		}
		else
			write(1, 0[argv], 1);
		(*argv)++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	return ((void)argc, camel_to_snake(++argv));
}
