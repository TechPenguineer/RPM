#include <string.h>
#include "handle.h"
void AppendDep(int argc, char *argv[])
{
        if(argc == 6)
        {
         printf("\n\nAdding Dependency: %s \nVersion %s ", argv[3], argv[5]);
        }
        else if(argc <= 5){
            printf("RPM Error: Not enought arguments supplied");
        }else if(argc > 6){
            printf("RPM Error: Too many arguments supplied");
        }
}