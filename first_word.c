#include <unistd.h>


int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

    int first = 0;
	int count = 0;
	
	while(argv[1][count] != '\0')
	{
	    if(argv[1][count] != ' ')
	    {
	        write(1, &argv[1][count],1);
	        first = 1;
	    }
	    if(argv[1][count] == ' ' && first == 1){
	        write(1, "\n", 1);
	        return 0;
	    }
	    count++;
	}

	return 0;

}



