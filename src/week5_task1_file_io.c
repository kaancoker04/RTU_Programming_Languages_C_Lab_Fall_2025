// Kaan  Arda Coker 241ADB079
// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100] = "data.txt";
    char line[256];

    // 1. Open file for writing (mode = "w")
    fp = fopen(filename, "w");
    // 2. Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Could not open %s for writing.\n", filename);
        return 1;
    }
    // 3. Write 2–3 lines of text to the file using fprintf()
    fprintf(fp, "Hello, file I/O in C!\n");
    fprintf(fp, "This is another line.\n");
    fprintf(fp, "File handling is simple once you practice.\n");
    // 4. Close the file
    fclose(fp);

    // 5. Open file again for reading (mode = "r")
    fp = fopen(filename, "r");
    // 6. Check if file opened successfully for reading
    if (fp == NULL) {
        printf("Error: Could not open %s for reading.\n", filename);
        return 1;
    }

    printf("Reading contents from %s:\n", filename);

    // 7. Use fgets() in a loop to read and print each line to the console
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    // 8. Close the file
    fclose(fp);

    // BONUS: ask user for filename instead of using default "data.txt"
    // BONUS: count number of lines read

    return 0;
}
