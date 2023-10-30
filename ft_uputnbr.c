/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:53:54 by passunca          #+#    #+#             */
/*   Updated: 2023/10/30 15:54:04 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uputnbr(size_t n)
{
	int len;

	len = ft_numlen(n, 10);
	if (n >= 10)
	{
		ft_uputnbr(n / 10);
		ft_uputnbr(n % 10);
	}
	else 
	{
		ft_putchar(n + '0');
	}
	return (len);
}
//
// int	main(int argc, char *argv[])
// {
// 	unsigned int	n;
// 	int				*len;
//
// 	len = NULL;
// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <number>\n", argv[0]);
// 		return (1);
// 	}
// 	n = ft_atoi(argv[1]);
// 	ft_uputnbr(n);
// 	printf("\n");
// 	return (0);
// }
