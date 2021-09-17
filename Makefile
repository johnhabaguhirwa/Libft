NAME = libft.a

SRC = 	./ft_atoi.c 		\
 		./ft_bzero.c 		\
		./ft_calloc.		\
 		./ft_isalnum.c 		\
 		./ft_isalpha.c 		\
 		./ft_isascii.c 		\
 		./ft_isdigit.c 		\
 		./ft_isprint.c 		\
 		./ft_itoa.c 		\
  		./ft_memchr.c 		\
 		./ft_memcmp.c 		\
 		./ft_memcpy.c 		\
 		./ft_memdel.c 		\
 		./ft_memmove.c 		\
 		./ft_memset.c 		\
		./ft_nbrlen.c		\ # not official
 		./ft_putchar_fd.c 	\
 		./ft_putendl_fd.c 	\
 		./ft_putnbr_fd.c 	\
 		./ft_putstr_fd.c 	\
		./ft_split.c		\
 		./ft_strcat.c 		\
 		./ft_strchr.c 		\
  		./ft_strdup.c 		\
  		./ft_striteri.c 	\
 		./ft_strjoin.c 		\
 		./ft_strlcat.c 		\
		./ft_str_cpy		\
 		./ft_strlen.c 		\
 		./ft_strmapi.c 		\
 		./ft_strncmp.c 		\
 		./ft_strncpy.c 		\
  		./ft_strrchr.c 		\
 		./ft_strtrim.c 		\
		./ft_substr.c		\
 		./ft_tolower.c 		\
 		./ft_toupper.c 		\
		./ft_wordsets.c		\ # not official

OBJS = $(SRC:.c=.o)

HDRS = libft.h

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror -I $(HDRS) $(SRC) 
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
