/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:06:55 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/03 16:20:23 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	printList(struct s_list* n);

int main()
{
	struct s_list	*head;
	struct s_list	*second;
	struct s_list	*tail;

	head = NULL;
	second = NULL;
	tail = NULL;
	head = (struct s_list *)malloc(sizeof(struct s_list));
	second = (struct s_list *)malloc(sizeof(struct s_list));
	tail = (struct s_list *)malloc(sizeof(struct s_list));
	head->content = "Hello";
	head->next = second;
	second->content = "World";
	second->next = tail;
	tail->content = "!";
	tail->next = NULL;
	printList(head);
}

void	printList(struct s_list* n)
{
    while (n != NULL) {
        printf("%s ", n->content);
        n = n->next;
    }
}
