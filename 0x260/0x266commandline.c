commandline.c
#include <stdio.h>
int main(int arg_count, char *arg_list[]) {
int i;
printf("There were %d arguments provided:\n", arg_count);
for(i=0; i < arg_count; i++)
printf("argument #%d\t-\t%s\n", i, arg_list[i]);
}
P rogramming 59
reader@hacking:~/booksrc $ gcc -o commandline commandline.c
reader@hacking:~/booksrc $ ./commandline
There were 1 arguments provided:
argument #0 - ./commandline
reader@hacking:~/booksrc $ ./commandline this is a test
There were 5 arguments provided:
argument #0 - ./commandline
argument #1 - this
argument #2 - is
argument #3 - a
argument #4 - test
reader@hacking:~/booksrc $
