#include <stdio.h>
#include <unistd.h> // <io.h> = <unistd.h> in VSC
//int argc, char*argv[]
int main(int argc, char*argv[])
{
    int i;
    char j[15] = "Hello World\n";
    write(1, j, 12);
    printf("argc = %dę°\n", argc);
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s ėëë¤.\n",i,argv[i]);
    }
    
	
    return 0;
}
