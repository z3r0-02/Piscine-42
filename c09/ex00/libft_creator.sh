gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a *.o
find . -name "*.o" -type f -delete
ranlib libft.a
