/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 17:17:05 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/18 19:02:48 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

#include <stdio.h>
char	*ft_mallocat(char *str, char *buf)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	j = 0;
	tmp = (char *)malloc(sizeof(char) * 1000); // C'est vrai que strlen(buf) + strlen(str), c'est trop hardcore 
	if (tmp == NULL)
		return (0);
	while (str[++i])
		tmp[j++] = str[i];
	i = -1;
	while (buf[++i])
		tmp[j++] = buf[i];
	tmp[j] = '\0';
	free(str);
	free(buf);
	return (tmp);
}
