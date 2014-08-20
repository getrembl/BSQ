/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 11:23:53 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/18 17:35:12 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (*str != '\0')
	{
		str++;
		cpt++;
	}
	return (cpt);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
