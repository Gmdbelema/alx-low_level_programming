#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[5];
    FILE* fp = fopen("myfile", "rb");

    if (fp == NULL) {
        perror("Failed to open file \"myfile\"");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < 5; i++) {
        int rc = getc(fp);
        if (rc == EOF) {
            fputs("An error occurred while reading the file.\n", stderr);
            return EXIT_FAILURE;
        }
        
        buffer[i] = rc;
    }

    fclose(fp);

    printf("The bytes read were... %02x %02x %02x %02x %02x\n", buffer[0], buffer[1],
        buffer[2], buffer[3], buffer[4]);

    return EXIT_SUCCESS;
}
