SRC = sources/strace.c												\
	  sources/strace_info/strace_info.c								\
	  sources/strace_args/strace_args.c								\
	  sources/strace_args/strace_args_utils.c						\
	  sources/strace_syscall_object/strace_syscall_info.c			\
	  sources/strace_syscall_object/strace_syscall_object.c			\
	  sources/strace_syscall_object/strace_syscall_object_utils.c	\
	  sources/strace_syscall_object/strace_display_strace.c			\
	  sources/strace_utils/strace_help.c							\
	  cmod/cmod_delete.c											\
	  cmod/cmod_new.c

NAME = strace

CC = gcc

CFLAGS = -I includes/ -g -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(SRC) $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
