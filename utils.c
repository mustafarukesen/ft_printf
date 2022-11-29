/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:53:51 by mesen             #+#    #+#             */
/*   Updated: 2022/10/27 20:53:51 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *var)
{
	int	i;

	i = 0;
	if (!var)
		return (ft_putstr("(null)"));
	while (var[i] != '\0')
		ft_putchar(var[i++]);
	return (i);
}
