
#include <stdio.h>
#include <string.h>

void convertOpposite(char* str)
{
	int ln = strlen(str);

	
	for (int i = 0; i < ln; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')

			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')

			str[i] = str[i] + 32;
	}
}

int main()
{
	char str[] = "kanpur\n";

	convertOpposite(str);

	printf("%s", str);
	return 0;
}
