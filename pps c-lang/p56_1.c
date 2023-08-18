//For turbo C++ remove below comments
#include <stdio.h>
//#include<conio.h>
void main()
{
    // clrscr();
    char str[100];
    char *ptr;
    printf("Enter a string: ");
    gets(str);
    ptr = str;
    printf("Entered string is: \n");
    while (*ptr != '\0')
        printf("Address=%p \t Value=%c\n", ptr, *ptr++);
    // getch();
}