/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:48:32 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/12 11:20:23 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../includes/dispatch_ps.h"

int     main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	a = NULL;
	create_stack(&a, ac, av);
	b = NULL;
	// ft_printstack(&a);
	// ft_printstack(&b);

	// This is OK sequence of operations
	// ft_putstr("rra\n");
	// ft_putstr("pb\n");
	// ft_putstr("sa\n");
	// ft_putstr("rra\n");
	// ft_putstr("pa\n");	

	// This is KO sequence of operations
	// ft_putstr("sa\n");
	// ft_putstr("rra\n");
	// ft_putstr("pb\n");

	// Personal test
	ft_putstr("sa\n");
	ft_putstr("pb\n");
	ft_putstr("pb\n");
	ft_putstr("pb\n");
	ft_putstr("sa\n");
	ft_putstr("pa\n");
	ft_putstr("pa\n");
	ft_putstr("pa\n");		

	// system("leaks push_swap");
}