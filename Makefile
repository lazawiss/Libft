NAME = libft.a

SRCS = \
	   ft_atoi.c \
	   ft_itoa.c \
	   ft_putnbr_fd.c \
	   ft_strlcpy.c \
	   ft_tolower.c \
	   ft_bzero.c \
	   ft_memchr.c \
	   ft_putstr_fd.c \
	   ft_strlen.c \
	   ft_toupper.c \
	   ft_calloc.c \
	   ft_memcmp.c \
	   ft_split.c \
	   ft_strmapi.c \
	   ft_isalnum.c \
	   ft_memcpy.c \
	   ft_strchr.c \
	   ft_strncmp.c \
	   ft_isalpha.c \
	   ft_memmove.c \
	   ft_strdup.c \
	   ft_strnstr.c \
	   ft_isascii.c \
	   ft_memset.c \
	   ft_striteri.c \
	   ft_strrchr.c \
	   ft_isdigit.c \
	   ft_putchar_fd.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_isprint.c \
	   ft_putendl_fd.c \
	   ft_strlcat.c \
	   ft_substr.c 
SRC_BONUS = \
			ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

AR = ar
CC = clang
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(OBJS_BONUS)
	$(AR) rcs $(NAME) $(OBJS_BONUS)
 

