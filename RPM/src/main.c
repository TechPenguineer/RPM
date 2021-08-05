#include "handle.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    // ADD DEPENDENCY
    //if (strcmp(tolower(argv[1]),"add") == 1
    //&& strcmp(tolower(argv[2]),"dep") == 1
    //&& strcmp(tolower(argv[4]),"-v") == 1
    //&& argc==3)
    //{
    //    printf("a");
    //    //AppendDep(tolower(argv[3]), argv[5]);
    //}
    if (strcmp(argv[1], "add")==0 && strcmp(argv[2], "dep")==0 && strcmp(argv[4], "-v")==0 //&& argc==5
    )
    {
        AppendDep(argc, argv);
    }
    
}
