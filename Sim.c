#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rm ( char *s )
{
    char *p = s, *q = s;
    while(*q) {
        while ( *p == *(p+1) )
            p++;
        *q++ = *p++;
    }
    s = ( char* ) malloc ( q - s );
}

int main()
{
    int n;
    char T[] = "AAABBB CCCDDD HHHrRRR JIiiihgggjjG";
    
    puts (T);
    rm(T);
    puts(T);
    return 0;
}
