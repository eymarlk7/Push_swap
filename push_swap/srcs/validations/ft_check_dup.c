#include "../../includes/push_swap.h"

int	ft_check_dup(t_stack **cur)
{
	t_stack	*a;
	t_stack	*tmp;

	a = *cur;
	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->val == tmp->val)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}