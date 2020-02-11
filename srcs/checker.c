/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:13:18 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 14:53:10 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../includes/dispatch_ps.h"
#define CE(x) create_elem(x)

// Right now, checker program just accepts commands and performs
// operations on manually created stack a and b

static void    ft_printstack(t_stack **a)
{
    t_stack *temp = *a;
    if (!(*a))
    {
        printf("empty\n");
        return ;
    }
    while (temp != NULL)
    {
        printf(" %d ->", temp->n);
        temp = temp->next;
    }
    printf(" end\n");
}

int     main(int ac, char **av)
{
    if (ac == 1)
    {
        printf("Usage: Enter Operation as Arg\n");
        printf("(sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, or rrr)\n");
        return (0);
    }
    t_stack *a = CE(2);
    t_stack *b = CE(1);
    b->next = CE(3);
    b->next->next = CE(5);
    a->next = CE(4);
    a->next->next = CE(6);
    ft_printstack(&a);
    ft_printstack(&b);
    for (int i = 0; i < PS_OPERATIONS; i++)
        if (ft_strcmp(av[1], PS_dispatch_table[i].type) == 0)
            PS_dispatch_table[i].operation(&a, &b);
    printf("new stacks\n");
    ft_printstack(&a);
    ft_printstack(&b);
}

// cc -L./../libft/ *.c -o test to make executable to test dispatch table
