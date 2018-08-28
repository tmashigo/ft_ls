/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:03:15 by tmashigo          #+#    #+#             */
/*   Updated: 2018/08/24 15:51:36 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_items.h"

int		main(int argc, char **argv)
{
	int		i;
	t_env	e;
	t_dir	*temp;

	i = 1;
	e.ft_list = NULL;
	while (i < argc)
	{
		if (argv[i][0] != '-' && (temp = (t_dir *)malloc(sizeof(t_dir))))
		{
			temp->dir = argv[i];
			temp->next = e.ft_list;
			e.ft_list = temp;
			ft_putstr("ft_list_items: ");
			ft_putstr(argv[i]);
			ft_putendl(": No such file or directory");
		}
		else if (add_args(&e, argv[i]) == 0)
			return (0);
		i++;
	}
	if (e.ft_list == NULL)
		do_ft_list(&e);
	ft_list_items(&e);
}
