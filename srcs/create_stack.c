/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhao <vzhao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:31:22 by vzhao             #+#    #+#             */
/*   Updated: 2020/02/11 15:54:38 by vzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack     *create_elem(int n)
{
    t_stack *node = (t_stack*)malloc(sizeof(t_stack));
    node->n = n;
    node->next = NULL;
    return (node);
}

int      check_duplicate(t_stack **a, int number)
{
   t_stack *temp;
 
   temp = *a;
   while (temp != NULL)
   {
       if (temp->n == number)
           return (1);
       temp = temp->next;
   }
   return (0);
}

void        PS_exit(char *msg)
{
   ft_putstr(msg);
   ft_putchar('\n');
   exit(1);
}

int         atoi_check(char *str, int *error)
{
   int             i;
   int             sign;
   unsigned int    ans;
 
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
   if (ft_isprint(str[i]) || (int)ans > INT_MAX || (int)ans < INT_MIN)
       *error = 1;
   return ((int)ans);   
}

// You are kinda stuck here.....
// Need to parse arguments into a linked list...

static void	    PS_addend(t_stack **alst, t_stack *new)
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

void        create_stack(t_stack **a, int ac, char **av)
{
   int i;
   int error;
   int number;
   t_stack *temp;
 
   i = 0;
   error = 0;
//    number = atoi_check(av[1], &error);
//    a = create_elem(number);
//    head = &a;
//    temp = *a;
   while (++i < ac)
   {
       number = atoi_check(av[i], &error);
       if (error || check_duplicate(a, number))
           PS_exit("Error");
        temp = create_elem(number);
        PS_addend(a, temp);
        free(temp);
        // temp = temp->next;
    //    temp = create_elem(number);
    //    temp = (*temp)->next;

   }
//    return (a);
}

