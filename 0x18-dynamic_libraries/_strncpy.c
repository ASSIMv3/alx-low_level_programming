#include <unistd.h>

char *_strncpy(char *dest, char *src, int n)
{
    char *temp = dest;
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return temp;
}
