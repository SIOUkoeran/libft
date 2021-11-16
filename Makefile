CC=gcc
CFLAGS=-Werror -Wall -Wextra
SRCS=./*.c
OBJS=./*.o
NAME=libft.h
AR=AR
ARFLAGS=rc

all : $(NAME)
	$(AR) $(CFLAGS) $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) $(OBJS)