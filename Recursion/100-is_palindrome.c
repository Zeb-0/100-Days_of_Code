#include <stdio.h>

int is_palindrome(char *s);
int str_len(char *s);
int _palindrome(char *s, int len, int i);

/**
 * str_len - get the length of a string
 * Return: len
 */

int str_len(char *s){
	/* base case */
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * _palindrome - checks if string is a palindrome
 * Return: 1 if true else 0
 */

int _palindrome(char *s, int len, int i){
	/* base case */
	if (s[i] == s[len / 2])
		return (1);
	else if (s[i] == s[len - i - 1])
		return (_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - return a palindrome
 * Return: 1 if palindrome, 0 if otherwise
 */

int is_palindrome(char *s){
	int i, len;

	i = 0;
	len = str_len(s);
	if (!*s)
		return (1);
	return (_palindrome(s, len, i));
}

int main(){
	int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
