#include <stdint.h>
#include <stdio.h>

unsigned int	get_size(char *src)
{
    int     i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size -1 && src[i])
		{
		    dest[i] = src[i];
		    i++;
		}
	}
	dest[i] = '\0';
	return (get_size(src));
}

int main(void)
{
    char src[] = "hamzah from 42";
    char dest[] = "";
    printf("the size is: %d\n",ft_strlcpy(dest,src,5));
    printf("dest: %s", dest);

}
