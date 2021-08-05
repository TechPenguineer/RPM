#include "handle.h"
#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    // ADD DEPENDENCY
    if (tolower(argv[1]) == "add" && tolower(argv[2])=="dep"&& tolower(argv[4])=="-v" && argc==3)
    {
        AppendDep(tolower(argv[3]), argv[5]);
    }
    
}