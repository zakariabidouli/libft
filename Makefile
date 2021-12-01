

NAME 	= libft.a

CC 		= gcc
FLAGS	= -Wall -Wextra -Werror


SRC 	 =  ft_atoi.c ft_bzero.c ft_calloc.c  ft_isalpha.c ft_isdigit.c ft_itoa.c  ft_isprint.c 			\
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_isalnum.c		\
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c  ft_split.c ft_strchr.c ft_strdup.c ft_isascii.c	\
			ft_striteri.c ft_strjoin.c ft_strlcpy.c ft_strlcat.c  ft_strlen.c ft_strmapi.c ft_strnstr.c		\
			ft_strrchr.c  ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strncmp.c 


B = 	ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c

OBJS 		= $(SRC:%.c=%.o)
# OBJS_B 		= $(B:%.c=%.o)


	
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) 

$(OBJS): $(SRC)
	 $(CC) -c $(SRC)

# bonus:$(NAME) 

# $(NAME): $(OBJS_B)
# 	ar rc $(NAME) $(OBJS_B)

# $(OBJS_B): $(B)
# 	 $(CC) -c $(B)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all
