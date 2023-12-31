/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:40:20 by passunca          #+#    #+#             */
/*   Updated: 2023/11/07 11:02:00 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_unumlen(n, 10);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
//
// int main(void)
// {
// 	unsigned int	n = 0;
// 	char			*nbrstr = NULL;
//
// 	nbrstr = ft_uitoa(n);
// 	printf("n = %u\n", n);
// 	printf("'%s'\n", nbrstr);
// 	free(nbrstr);
// 	return (0);
// }
