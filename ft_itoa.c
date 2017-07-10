/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsominsk <gsominsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 13:17:19 by gsominsk          #+#    #+#             */
/*   Updated: 2016/11/29 13:18:42 by gsominsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	long int	i;
	int			n_len;

	n_len = (n < 0) ? 2 : 1;
	i = n;
	while (i /= 10)
		n_len++;
	str = ft_strnew(n_len);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[n_len] = '\0';
	i = n;
	if (n < 0)
		i = -i;
	while (n_len--)
	{
		str[n_len] = i % 10 + '0';
		i /= 10;
		if (i == 0)
			break ;
	}
	return (str);
}
