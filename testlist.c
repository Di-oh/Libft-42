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

void	deletenodo(void *nodo)
{
	free(nodo);
}

void	printnode(t_list *node)
{
	printf("=== %p ===\n",node);
	printf("CONTENT: %s\n",(char *)node->content);
	printf("NEXT: %p\n",node->next);
	printf("============\n");
}

void printlist(t_list *node)
{
	printf("****Imprimir lista*******\n");
	while(node != NULL)
	{
		printnode(node);
		node = node->next;
	}
	printf("*************************\n");
}



int main(void)
{
	t_list *root;
	int	i;
	root = ft_lstnew(ft_strdup("hola"));
	ft_lstadd_front(&root,ft_lstnew(ft_strdup("adios")));
	ft_lstadd_back(&root, ft_lstnew(ft_strdup("Añadir al final")));
	printlist(root);
//	ft_lstdelone(root, &deletenodo);
//	printlist(root);
//	deletecontent(root->content);
	printlist(root);
	printf("Numero de nodos en lista: %d\n", ft_lstsize(root));
	free(root);
}
