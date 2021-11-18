/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:34:55 by jschreye          #+#    #+#             */
/*   Updated: 2021/10/28 09:45:52 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{	
		write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}	
	ft_putchar(n + '0');
}
int main()
{
	unsigned int	i;

	i = 0;
	if (i++ == 0)
		write (1, "0\n", 2);
	while (i <= 100)
	{
		if ((i % 15) == 0)
			write (1, "fizzbuzz\n", 9 );
		else if ((i % 3) == 0)
			write (1, "fizz\n", 5 );
		else if ((i % 5) == 0)
			write (1, "buzz\n", 5);
		else
		{
			ft_putnbr(i);
			write (1, "\n", 1);
		}
		i++;
	}
}
