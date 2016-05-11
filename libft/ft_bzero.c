/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 14:51:14 by dnematan          #+#    #+#             */
/*   Updated: 2016/05/11 16:33:50 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *p;
	char c;

	i = 0;
	c = '0';
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
}

int main()
{
	char s[] = "Dakalo";
	ft_bzero(s, 3);
	printf("%c\n", s[1]);
	return (0);
}
