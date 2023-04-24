#include <stdio.h>
#include <string.h>

/* prints a string */
void _puts_recursion(char *s);

void _puts_recursion(char *s){
	/* Base case */
	if (*s == '\0'){
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1); /* recursive case */
}

int main(void){
	_puts_recursion("try this string");
	return (0);
}
