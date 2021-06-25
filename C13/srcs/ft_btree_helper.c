#include "ft_btree_test.h"
#include "ft_strings.h"
#include "ft_io.h"

int	btree_data_cmp(void *data1, void *data2)
{
	return (ft_strcmp((char *) data1, (char *) data2));
}

void	ft_show_content(void *item)
{
	ft_putstr((char *) item);
}

static void	ft_show_tree(t_btree *root, int depth)
{
	if (!root)
	{
		ft_tabulate(depth, 0);
		ft_putstr("(null)\n");
		return ;
	}
	ft_tabulate(depth, 0);
	ft_putstr((char *) root->item);
	ft_putchar('\n');
	ft_tabulate(depth, 0);
	ft_putstr("left:\n");
	ft_show_tree(root->left, depth + 1);
	ft_tabulate(depth, 0);
	ft_putstr("right:\n");
	ft_show_tree(root->right, depth + 1);
}

void	btree_show_tree(t_btree *root)
{
	ft_show_tree(root, 0);
}