/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:46:52 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 22:16:11 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack		*create_elem(int n)
{
	t_stack	*node;

	node = (t_stack*)malloc(sizeof(t_stack));
	node->n = n;
	node->next = NULL;
	return (node);
}

int			check_duplicate(t_stack **a, int number)
{
	t_stack	*temp;

	temp = *a;
	while (temp != NULL)
	{
		if (temp->n == number)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int			atoi_check(char *str, int *error)
{
	int		i;
	int		sign;
	int64_t ans;

	i = 0;
	sign = 1;
	ans = 0;
	while (ft_is_whitesp(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = (ans * 10) + (str[i] - '0');
		i++;
	}
	ans *= sign;
	if (ft_isprint(str[i]) || ans > INT_MAX || ans < INT_MIN)
		*error = 1;
	return ((int)ans);
}

static void	ft_ps_addend(t_stack **alst, t_stack *new)
{
	t_stack *temp;

	temp = *alst;
	if (!*alst)
		(*alst) = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

void		create_stack(t_stack **a, int ac, char **av)
{
	int		i;
	int		error;
	int		number;

	i = 0;
	error = 0;
	while (++i < ac)
	{
		number = atoi_check(av[i], &error);
		if (error || check_duplicate(a, number))
			ft_ps_exit("Error\n", standard_error);
		ft_ps_addend(a, create_elem(number));
	}
}
