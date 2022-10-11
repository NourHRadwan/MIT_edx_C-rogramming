#include <stdio.h>
#include <unistd.h>
#include<string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void rev_string(char *s);
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    rev_string(str);
    return (0);
}
void rev_string(char *s)
{
	int i, k, tmp, len;

	i = 0;
	//calcualting the length
    while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;
	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}