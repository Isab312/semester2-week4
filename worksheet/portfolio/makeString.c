
/*
Name:
Student ID:
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char buffer[50];  // holds the final string of watever we want
    buffer[0] = '\0'; // initialise empty

    for(int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);         // add the argument on a counter
        if(i < argc - 1) {
            strcat(buffer, "-");        // add dash if not last argument
        }
    }

    printf("%s\n", buffer); // only print once
    return 0;
}
