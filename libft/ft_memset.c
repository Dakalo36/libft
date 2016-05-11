/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:51:11 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/11 14:48:34 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int  main()
{
//	char s[] = "dakalo Nematan";

	//s = "dakalo Nematandani";
	 printf("%s\n", memset(s, '$', 6));
 	 printf("%s\n", ft_memset(s, '$', 6));

	return (0);
}
