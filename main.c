#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("just 2 arg :)");
		return (0);
	}
	char *txt = argv[1];
	int i = 0;
	while (txt[i])
	{
		int shift = 0;
		while (shift < 8)
		{
			int nbr = 128 >> shift;
			if ((nbr & txt[i]) == 0)
				printf("%s", "0");
			else
				printf("%s", "1");
			shift++;
			usleep(200);
		}
		printf(" ");
		i++;
	}
}