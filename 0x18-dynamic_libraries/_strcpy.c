#include <unistd.h>

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return temp;
}
