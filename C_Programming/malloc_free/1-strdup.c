#include <stdio.h>
#include <string.h>
#include<stdlib.h>

/**
 * str_len - returns length of string
 * return: lenght
 */

int str_len(char *s);
char *str_copy(char *dest, char *src);
char *_strdup(char *str);


int str_len(char *s){
	int i, len = 0;

//	if (s == '\0')
//		return (0);
	for (i = 0; s[i] != '\0'; i++){
		len++;
	}
	return (len);
}


/**
 * str_copy - returns a copy(dest) of a given string(src)
 * Returns: dest
 */

char *str_copy(char *dest, char *src){
	int i;

	for (i = 0; src[i] != '\0'; i++){
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Return: pointer to duplicated string otherwise NULL if str = NULL
 */

char *_strdup(char *str){
	int len;
	char *new_str;

	if (str == NULL)
		return (NULL);
	len = str_len(str);
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	str_copy(new_str, str);
	return (new_str);
}

int main(void){
	char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
