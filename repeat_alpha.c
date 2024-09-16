#include <unistd.h>

int ft_strlen(char *s2);

int main(int argc, char* argv[]){
    int count = 0;
    int repeat = 0;
    while(argv[1][count] != '\0')
    {
        if(argv[1][count] >= 65 && argv[1][count] <= 90)
        {
            repeat = argv[1][count] - 65;
            while(repeat >= 0)
            {
                write(1, &argv[1][count], 1);
                repeat--;
            }
        }
        else if(argv[1][count] >= 97 && argv[1][count] <= 122)
        {
            repeat = argv[1][count] - 97;
            while(repeat >= 0)
            {
                write(1, &argv[1][count], 1);
                repeat--;
            }
        }
        
        count++;
    }
    return 0;
    
}
    

