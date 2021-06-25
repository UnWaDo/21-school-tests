#include "ft_io.h"
#include "ft_strings.h"
#include "ft_btree_test.h"

int	main(int argc, char **argv)
{
	t_btree	*root;
	int		i;
	char	*str;

	root = 0;
	i = 1;
	while (i < argc)
	{
		btree_insert_data(&root, argv[i], &btree_data_cmp);
		i++;
	}
	btree_show_tree(root);
	btree_apply_prefix(root, &ft_show_content);
	ft_putchar('\n');
	btree_apply_infix(root, &ft_show_content);
	ft_putchar('\n');
	btree_apply_suffix(root, &ft_show_content);
	ft_putchar('\n');
	ft_putstr("Searching for string: squirrel\n");
	str = btree_search_item(root, "squirrel", &btree_data_cmp);
	if (!str)
		ft_putstr("\tNot found\n");
	else
	{
		ft_putchar('\t');
		ft_putstr(str);
		ft_putchar('\n');
	}
	ft_putstr("Searching for string: ");
	ft_putstr(argv[1]);
	ft_putchar('\n');
	str = btree_search_item(root, argv[1], &btree_data_cmp);
	if (!str)
		ft_putstr("\tNot found\n");
	else
	{
		ft_putchar('\t');
		ft_putstr(str);
		ft_putchar('\n');
	}
	ft_putstr("Level amount: ");
	ft_putnbr(btree_level_count(root));
	ft_putchar('\n');
	btree_remove_tree(root);
	return (0);
}
