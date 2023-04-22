#include <stdio.h>

/* returns length of a given string using recursion. */

int _strlen_recursion(char *s);
int _strlen(char *s);

int _strlen_recursion(char *s){
	int len;

	if (*s == '\0')
		return(0);
	return (1 + _strlen_recursion(s + 1));
}

int _strlen(char *s){
        int len;

        if (*s == '\0')
                return (0);
        for (len = 0; s[len] != '\0'; len++);
        return (len);
}

int main(){
	int len, n;

	n = _strlen_recursion("returns length of a given string");
	printf("%d\n", n);
	len =  _strlen("returns length of a given string");
	printf("length is : %d\n", len);

	return (0);
}
