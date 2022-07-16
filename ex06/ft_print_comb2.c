/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaigles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:40:50 by juaigles          #+#    #+#             */
/*   Updated: 2022/07/15 16:39:43 by juaigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_num(int num)
{
	if (num <= 9)
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
	else
	{
		ft_putchar(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
}

void	print2num(int a, int b)
{
	print_num(a);
	ft_putchar(' ');
	print_num(b);
	if (a < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = 1;
		while (j <= 99)
		{
			if (i < j)
			{
				print2num(i, j);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
