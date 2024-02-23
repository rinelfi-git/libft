CC			=	cc
CFLAGS		=	-Werror -Wextra -Wall
AR			=	ar rcs
NAME		=	libft.a
HEADER		=	libft.h
DEL			=	rm -rf
D_OBJECTS	=	obj
DIR_CREATE	=	mkdir -p
SOURCES		=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_islower.c \
				ft_isprint.c \
				ft_isupper.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c
OBJECTS		=	$(patsubst %.c,$(D_OBJECTS)/%.o,$(SOURCES))

all					: $(NAME)

$(NAME)				: $(HEADER) $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

$(D_OBJECTS)/%.o	: %.c $(D_OBJECTS)
	$(CC) $(CFLAGS) -o $@ -c $<

$(D_OBJECTS)		:
	$(DIR_CREATE) $(D_OBJECTS)

clean 				:
	$(DEL) $(OBJECTS)
	$(DEL) $(D_OBJECTS)

fclean				: clean
	$(DEL) $(NAME)

re					: fclean all
