/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:58:49 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 21:49:35 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Probably won't need ft_printstack when we're finished
*/

void		ft_printstack(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	if (!(*a))
	{
		ft_putstr("empty\n");
		return ;
	}
	while (temp != NULL)
	{
		ft_printf(" %d ->", temp->n);
		temp = temp->next;
	}
	ft_putstr(" end\n");
}

/*
** ft_ps_exit
** - prints the message on standard output and exits programs
** Args:
** char *msg = string to be printed
** Returns:
** Nothing
*/

void		ft_ps_exit(char *msg, int file_number)
{
	if (file_number == standard_out)
		ft_putstr_fd(msg, file_number);
	if (file_number == standard_error)
		ft_putstr_fd(msg, file_number);
	exit(1);
}
