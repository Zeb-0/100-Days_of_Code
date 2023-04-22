#include <stdio.h>
#include <string.h>

/* print a string in reverse */
void _print_rev_recursion(char *s);


void _print_rev_recursion(char *s){
	/* basw case */
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);
}

int main(void){
	_print_rev_recursion(" Tried the first method but failed");
	return (0);
}
