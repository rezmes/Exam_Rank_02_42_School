#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
		t_list *start;
		int	temp;

		if (!lst)
				return (0);
		start = lst;
		while (lst->next)
		{
				if ((*cmp)(lst->data, lst->next->data)== 0)
				{
						temp = lst -> data;
						lst->data = lst->next->data;
						lst->next->data = temp;
						lst = start;
				}
				else
						lst = lst->next;
		}
		return (start);
}
