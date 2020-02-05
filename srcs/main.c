/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:13:18 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/05 12:15:32 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#define CE(x) create_elem(x)

t_stack     *create_elem(int n)
{
    t_stack *node = (t_stack*)malloc(sizeof(t_stack));
    node->n = n;
    node->next = NULL;
    return (node);
}

void    ft_printstack(t_stack **a)
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

int     main(void)
{
    t_stack *a = CE(2);
    t_stack *b = CE(1);
    b->next = CE(3);
    b->next->next = CE(5);
    a->next = CE(4);
    a->next->next = CE(6);
    ft_printstack(&a);
    ft_printstack(&b);
    ra(&a, &b);
    printf("new stacks\n");
    ft_printstack(&a);
    ft_printstack(&b);
}