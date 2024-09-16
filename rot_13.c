#include <unistd.h>


int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	int count = 0;
    int place = 0;
	while(argv[1][count] != '\0')
	{
		char c = argv[1][count];
		
		// ROT13 for uppercase letters
		if (c >= 'A' && c <= 'Z')
		{
			if (c + 13 > 'Z')
				c = c - 13;
			else
				c = c + 13;
		}
		// ROT13 for lowercase letters
		else if (c >= 'a' && c <= 'z')
		{
			if (c + 13 > 'z')
				c = c - 13;
			else
				c = c + 13;
		}
		
		write(1, &c, 1);
		count++;
	}

	return 0;

}
