/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 12:15:40 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/18 18:25:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	int ret;
	char *buf;
	char *str;

	buf = (char*)malloc(sizeof(char) * 1000);
	if (buf == NULL)
		return (0);
	str = (char*)malloc(sizeof(char) * 1000);
	if (str == NULL)
		return (0);
	str[0] = '\0';
	while ((ret = read(0, buf, 10)))
	{
		buf[ret] = '\0';
		str = ft_mallocat(str, buf);
		buf = (char*)malloc(sizeof((*buf) * 1000));
	}
	return (0);
}
