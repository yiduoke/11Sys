#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
    char ** output = (char**)calloc(5, sizeof("ugaediwbdhadkhwd"));
    int i=0;
    while (line){
        char * str = strsep(&line," ");
        output[i]= str;
        i++;
    }

    return output;
}

int main(){
    char line[30] = "ls -a -l";
    char *s1 = line;
    char ** commands = parse_args(line);
    execvp(commands[0], commands);
}