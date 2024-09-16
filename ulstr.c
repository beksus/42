#include <unistd.h>

int ft_strlen(char *s2);

int main(int argc, char* argv[])
{
	int count = 0;
	while(argv[1][count] != '\0')
	{
		if(argv[1][count] >= 'A' && argv[1][count] <= 'Z')
		{
			argv[1][count] += 32;
		}
		else if(argv[1][count] >= 'a' && argv[1][count] <= 'z')
		{
			argv[1][count] -= 32;
			
		}
		write(1, &argv[1][count], 1);
		count++;
	}
	return 0;

}



