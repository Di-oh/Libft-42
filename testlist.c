#include "libft.h"

char	*createcontent(char *str)
{
	char *new;

	new = ft_strdup(str);
	return (new);
}
/*
char	*modifycontent(unsigned int num, char *s)
{

}
*/
void	deletecontent(char *str)
{
	free(str);
}

void	printnode(t_list *node)
{
	printf("=== %p ===\n",node);
	printf("CONTENT: %s\n",node->content);
	printf("NEXT: %p\n",node->next);
	printf("============\n");
}

void printlist(t_list *node)
{
	while(node != NULL)
	{
		printnode(node);
		node = node->next;
	}
}

int main(void)
{
	t_list *root;
	root = ft_lstnew(strdup("hola"));
	ft_lstadd_front(&root,ft_lstnew(strdup("adios")));
	printlist(root);
	deletecontent(root->content);
	free(root);
}
