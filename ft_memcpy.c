#include<string.h>
#include<stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i = 0;
    char *castSrc;
    char *castDst;

    castDst = (char *) dst;
    castSrc = (char *) src;
    if(dst == src)
        return(0);
    
    while(i < n)
    {
        castDst[i] = castSrc[i];
        i++;
    }
    
    return dst;
}
int main () {
    char name[10] = "Walid";
    char nameAfter[10];
    
    // printf("%s\n", name);
    ft_memcpy(nameAfter, name, 3);
    printf("%s\n", nameAfter);

    return 0;
}