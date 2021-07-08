#include <stdlib.h>
#include <stdio.h>


int main(){
    // writing a file
    FILE *fpointer = fopen("./executed/first_file.txt", "w");
    
    // writing to file
    fprintf(fpointer, "Hello first output file!\nThe second line!\n");

    fclose(fpointer);

    // reading a file
    FILE *freader = fopen("./executed/first_file.txt", "r");

    // reading lines 
    char line[255];
    fgets(line, 255, freader); 

    fclose(freader);
    printf("%s", line);

    return 0;
}