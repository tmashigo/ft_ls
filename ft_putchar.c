/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:56:54 by tmashigo          #+#    #+#             */
/*   Updated: 2018/08/20 18:17:55 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_items.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
