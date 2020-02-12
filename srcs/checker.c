/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:13:18 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/12 11:35:55 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../includes/dispatch_ps.h"

/*
** Function that reads from standard input and applies operations to...
** ...stack a or stack b based off existing operations in dispatch table
** Args:
** t_stack **a: pointer to head of linked list (stack a)
** t_stack **b: pointer to head of linked list (stack b)
** Returns:
** Nothing, function manipulates pointers within stack a & b
*/

void	apply_operation(t_stack **a, t_stack **b)
{
	char	*operation;
	int		i;

	while (get_next_line(0, &operation) > 0)
	{
		i = -1;
		while (++i < PS_OPERATIONS)
			if (ft_strcmp(operation, PS_dispatch_table[i].type) == 0)
				PS_dispatch_table[i].operation(a, b);
		ft_strdel(&operation);
	}
	if (operation && *operation)
		ft_strdel(&operation);
}

/*
** Function that checks if our stack is sorted in ascending order
** Args:
** t_stack *a: linked list of integers (stack)
** Returns:
** 0 if stack is not sorted
** 1 if stack is sorted
*/

int		is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->n > a->next->n)
			return (0);
		a = a->next;
	}
	return (1);
}

/*
** Main function that creates our stacks from argument input
** Then applies operations to stack a & b by reading from standard input
** Lastly, checks if stack a is sorted and stack b is empty to output...
** ... either an OK for successful or KO for unsuccessful sort
** Args:
** int ac: argument count (# of argument inputs)
** char **av: argument vectory (2D array of strings from program input)
** Returns:
** Nothing, program exits after either encountering an error or ...
** ... or printing to standard output
** NOTE: error checking occurs in create_stack function
*/

int     main(int ac, char **av)
{
	t_stack *a;
    t_stack *b;

	if (ac == 1)
		exit(1);
	a = NULL;
	b = NULL;
	create_stack(&a, ac, av);
	ft_printstack(&a);
    ft_printstack(&b);
	apply_operation(&a, &b);
	// if (ac == 1)
    // {
    //     printf("Usage: Enter Operation as Arg\n");
    //     printf("(sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, or rrr)\n");
    //     return (0);
    // }
    ft_putstr("-----new stacks-----\n");
    ft_printstack(&a);
    ft_printstack(&b);
	ft_ps_exit((is_sorted(a) && !b ? "OK\n" : "KO\n"), standard_out);
	// system("leaks checker");
}
