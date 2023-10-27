/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:52:07 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/27 10:10:47 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnchar_fd(char c, int fd, int n)
{
	int	len;

	len = 0;
	if (n < 0)
		return (-1);
	while (n-- > 0)
	{
		if (write(fd, &c, 1) == -1)
			return (-1);
		++len;
	}
	return (len);
}
