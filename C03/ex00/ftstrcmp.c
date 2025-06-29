int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while((s1[i] || s2[i]) != '\0')
	{
		
	}
}


#include <stdio.h>
#include <string.h>

int main() {
	char arr1[] = "abCD", arr2[] = "abC", arr3[] = "abcd";
	int result;

	result = strcmp(arr1,arr2);
	printf("%d\n", result);
	result = strcmp(arr1,arr3);
	printf("%d\n", result);
  return 0;
}
