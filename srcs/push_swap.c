/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:48:32 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 21:29:18 by vzhao            ###   ########.fr       */
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
	ft_printstack(&a);
	ft_printstack(&b);
	// system("leaks push_swap");
}