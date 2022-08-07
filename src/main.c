#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    unsigned char *user_input = (unsigned char *)malloc(sizeof(unsigned char) * 16);
    FILE *file = fopen(argv[1], "w");

    if(file != NULL){
        scanf("%s", user_input);
        fputs((const char *)user_input, file);
    } else {
        printf("The file doesn't even exist! \n");
    }

    return 0;
}
