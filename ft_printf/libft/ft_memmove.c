/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:54 by achichar          #+#    #+#             */
/*   Updated: 2023/05/03 12:37:08 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*sr;
	unsigned char	*sd;
	size_t			i;

	i = 0;
	sr = (unsigned char *) src;
	sd = (unsigned char *) dst;
	if (!sr && !sd)
		return (NULL);
	if (dst == src)
		return (dst);
	while (i < len)
	{
		if (sr < sd)
			sd[len - i - 1] = sr[len - i - 1];
		else
			sd[i] = sr[i];
		i++;
	}
	return (dst);
}
