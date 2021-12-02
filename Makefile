CC=gcc
CFLAGS=-Werror -Wall -Wextra
SRCS=./*.c
OBJS=./*.o
NAME=libft.a
AR=ar
ARFLAGS=-rc

all : $(NAME)
	
$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean : 
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)