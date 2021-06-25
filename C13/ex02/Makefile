CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
SANIT	=	-fsanitize=address -static-libsan
NAME	=	ex02
EXEC	=	$(NAME).out
SRCS_F	=	main.c ft_btree_helper.c ft_btree_remove_tree.c ft_io.c ft_strings.c ft_btree_create_node.c ft_btree_apply_prefix.c ft_btree_apply_suffix.c ft_btree_insert_data.c ft_btree_search_item.c ft_btree_level_count.c
TST_F	=	btree_apply_infix.c
S_DIR	=	tests/srcs/
I_DIR	=	tests/includes/
T_DIR	=	$(NAME)/
SRCS	=	$(addprefix $(S_DIR),$(SRCS_F))
OBJS	=	$(SRCS:.c=.o)
TSTS_C	=	$(addprefix $(T_DIR),$(TST_F))
TSTS_O	=	$(TSTS_C:.c=.o)
INCL	=	$(addprefix -I ,$(I_DIR))
.PHONY:	all clean fclean norm

all:		$(EXEC)

$(EXEC):	$(OBJS) $(TSTS_O)
	$(CC) $(CFLAGS) $(SANIT) $(INCL) -o $(EXEC) $(OBJS) $(TSTS_O)

.c.o:
	$(CC) $(CFLAGS) $(SANIT) $(INCL) -o $@ -c $<

clean:
	rm -rf $(OBJS) $(TSTS_O)

fclean:		clean
	rm -rf $(EXEC)

re:			fclean $(EXEC)

norm:
	norminette -R CheckForbiddenSourceHeader $(T_DIR)/*.c
	norminette -R CheckDefine $(T_DIR)/*.h
