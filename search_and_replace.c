#include <unistd.h>

int ft_strlen(char *s2);

int main(int argc, char* argv[]){
    if(argc != 4)
    {
        write(1, "\n", 1);
        return 0;
    }
    
    int count = 0;
    while(argv[1][count] != '\0')
    {
        if(argv[1][count] == argv[2][0]){
            argv[1][count] = argv[3][0];
        }
        write(1, &argv[1][count], 1);
        count++;
    }
    
    return 0;
}
    

