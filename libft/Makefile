NAME=libft.a

SRCS=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c\
ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strncmp.c ft_strcmp.c\
ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c\
ft_toupper.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c\
ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strjoin.c ft_strsub.c\
ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c\
ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_concat_params.c ft_list_size.c\
ft_strcapitalize.c ft_strlowcase.c ft_strupcase.c get_next_line.c srcs/flags.c\
srcs/int_length.c srcs/print_int.c srcs/validators.c srcs/float_precision.c srcs/int_precision.c\
srcs/print_str_pointer_percent.c srcs/ft_printf.c	srcs/parser.c srcs/str_precision.c srcs/handlers.c\
srcs/print_float.c srcs/utils.c


OBJECTS=ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o\
ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o\
ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strncmp.o ft_strcmp.o\
ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_tolower.o\
ft_toupper.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o\
ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strjoin.o ft_strsub.o\
ft_strtrim.o ft_strsplit.o ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o\
ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_lstdelone.o\
ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_concat_params.o ft_list_size.o\
ft_strcapitalize.o ft_strlowcase.o ft_strupcase.o get_next_line.o flags.o\
int_length.o print_int.o validators.o float_precision.o int_precision.o\
print_str_pointer_percent.o ft_printf.o	parser.o str_precision.o\
handlers.o print_float.o utils.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(OBJECTS): %.o : %.c
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $<

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
