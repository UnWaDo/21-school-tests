#ifndef FT_BTREE_TEST_H
# define FT_BTREE_TEST_H

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;

t_btree		*btree_create_node(void *item);
void		btree_remove_tree(t_btree *root);
void		btree_insert_data(t_btree **root, void *data, int (*cmp)(void *, void *));
void		btree_show_tree(t_btree *root);
int			btree_data_cmp(void *data1, void *data2);
void		btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void		btree_apply_infix(t_btree *root, void (*applyf)(void *));
void		btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void		*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));
int			btree_level_count(t_btree *root);
void		btree_show_tree(t_btree *root);
void		ft_show_content(void *item);

#endif
