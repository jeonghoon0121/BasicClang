/*
    cmd���� .\Project1.exe red green blue �� ���� 
*/

#include <stdio.h>

int main(int argc, char* argv[])  
{
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
