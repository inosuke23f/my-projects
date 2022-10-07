#include<stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i = 0;
    char *k;
    k = (char*)s;

    while(k[i] != '\0' && i < n )
    {
        k[i] = 0;
        i++;
    }
}
int main()
{
    char s[] = "koka";
    ft_bzero(s+1,1);
    printf("%s", s);
    printf("%s", s+2);
    


}

    