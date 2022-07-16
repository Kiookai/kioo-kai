/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaigles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 03:25:34 by juaigles          #+#    #+#             */
/*   Updated: 2022/07/15 05:32:06 by juaigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_num_cal(int nb)
{
	char	num;

	if (nb > 9)
	{
		num = nb % 10 + '0';
		nb = nb / 10;
		ft_num_cal(nb);
		write(1, &num, 1);
	}
	else
	{
		num = nb + '0';
		write(1, &num, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
		}
		nb *= -1;
	}
	ft_num_cal(nb);
}

/*int	main(void)
{
	ft_putnbr(-5789985);
}*/
