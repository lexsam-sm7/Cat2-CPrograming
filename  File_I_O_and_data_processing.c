//C Program (C Program for File I/O and Data Processing)
/*
Name:Kuria Sammy Mwangi
Registration Number:CT101/G/26462/25.
Date:06/11/2025.
Description:The C program reads 10 integers from the user, saves them to "input.txt", calculates their sum and average, writes the results to "output.txt", and then displays the contents of both files.
*/

#include <stdio.h>
void write_integers_to_file() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter 10 integers:\n");
    int i; // The variable 'i' is declared before the loop
    for (i = 0; i < 10; i++) {
        int num;
        printf("Integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    fclose(file);
    printf("Integers written to input.txt\n");
}


void calculate_and_write_results() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
    if (input_file == NULL || output_file == NULL) {
        printf("Error opening files for calculation.\n");
        return;
    }

    int num, sum = 0, count = 0;
    while (fscanf(input_file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    double average = (double)sum / count;

    fprintf(output_file, "Sum: %d\n", sum);
    fprintf(output_file, "Average: %.2f\n", average);

    fclose(input_file);
    fclose(output_file);
    printf("Sum and average written to output.txt\n");
}

void display_file_contents() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "r");

    if (input_file != NULL) {
        printf("\n--- Contents of input.txt ---\n");
        int num;
        while (fscanf(input_file, "%d", &num) == 1) {
            printf("%d\n", num);
        }
        fclose(input_file);
    } else {
        printf("\nError opening input.txt for display.\n");
    }

    if (output_file != NULL) {
        printf("\n--- Contents of output.txt ---\n");
        char buffer[100];
        while (fgets(buffer, sizeof(buffer), output_file) != NULL) {
            printf("%s", buffer);
        }
        fclose(output_file);
    } else {
        printf("\nError opening output.txt for display.\n");
    }
}

int main() {
    write_integers_to_file();
    calculate_and_write_results();
    display_file_contents();
    return 0;
}