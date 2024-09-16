#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2);

int main(void)
{
    char d[] = "hello";  // Allocate on stack so it's writable
    char c[5];           // Allocate memory for the destination string
    char ds[12];
    
    ft_strcpy(ds, "hello world");
    ft_strcpy(c, d);     // Copy string from c to d

    int count = 0;
    while (c[count] != '\0')
    {
        write(1, &c[count], 1);
        count++;
    }
    write(1, &ds, 12);
    return 0;
}

char *ft_strcpy(char *s1, char *s2)
{
    int count = 0;
    
    while (s2[count] != '\0')
    {
        s1[count] = s2[count];
        count++;
    }
    s1[count] = '\0'; // Null-terminate the string
    return s2;
}
