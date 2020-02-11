#include "../includes/push_swap.h"

/* rra: reverse rotate a 
** - Shift down all elements of stack a by 1 (last element becomes 1st)
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void       rra(t_stack **a, t_stack **b)
{
    t_stack *last_of_a;
    t_stack *second_last_of_a;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    last_of_a = *a;
    if (b)
        ;
    while (last_of_a->next != NULL)
    {
        if (last_of_a->next->next == NULL)
            second_last_of_a = last_of_a;
        last_of_a = last_of_a->next; 
    }
    last_of_a->next = *a;
    *a = last_of_a;
    second_last_of_a->next = NULL;
}

/* rrb: reverse rotate b 
** - Shift down all elements of stack b by 1 (last element becomes 1st)
** - Do nothing if there is only one or no elements.
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void       rrb(t_stack **a, t_stack **b)
{
    t_stack *last_of_b;
    t_stack *second_last_of_b;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    last_of_b = *b;
    if (a)
        ;
    while (last_of_b->next != NULL)
    {
        if (last_of_b->next->next == NULL)
            second_last_of_b = last_of_b;
        last_of_b = last_of_b->next; 
    }
    last_of_b->next = *b;
    *b = last_of_b;
    second_last_of_b->next = NULL;
}

/* rrr: reverse rotates stack a and b  
** - perform rra and rrb at the same time
** Args:
** t_stack **a: The head of a linked list (stack a)
** t_stack **b: The head of a linked list (stack b)
** Returns:
** Nothing, manipulates pointers
*/

void        rrr(t_stack **a, t_stack **b)
{
    rra(a, b);
    rrb(a, b);
}