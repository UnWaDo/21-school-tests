EXCS	=	ex00 ex01 ex02 ex03 ex04 ex05 ex06
.PHONY: all clean fclean norm

all:		$(EXCS)

$(EXCS):	%.out
	ls tests/$</

$(addsuffix $(EXCS),.out):
	echo $< and $@
