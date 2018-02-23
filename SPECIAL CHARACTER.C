#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets,others;

    alphabets = others = 0;
    printf("Enter any string : ");
    gets(str);
 while(*s)
 {
 if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
 alphabets++;
 else
 others++;
 s++;
    }
printf("Alphabets = %d\n", alphabets);
printf("Special characters = %d", others);
return 0;
}
