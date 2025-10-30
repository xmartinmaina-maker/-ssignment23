/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: Program to perform file handling tasks
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student records (Task 2)
struct Student {
    char name[100];
    char regNumber[50];
    int marks;
};

// --- Function Prototypes ---
void create_sample_files();
void task1_add_book_title();
void task2_read_student_results();
void task3_calculate_total_sales();

int main() {
    printf("[INFO] Program started.\n");

    // Create sample files for demonstration purposes
    create_sample_files();

    // --- Execute Task 1 ---
    printf("\n--- Task 1: Add Book Title to Library Log ---\n");
    task1_add_book_title();
    printf("--- Task 1 Complete ---\n");

    // --- Execute Task 2 ---
    printf("\n--- Task 2: Read Student Exam Results ---\n");
    task2_read_student_results();
    printf("--- Task 2 Complete ---\n");

    // --- Execute Task 3 ---
    printf("\n--- Task 3: Calculate Total Daily Sales ---\n");
    task3_calculate_total_sales();
    printf("--- Task 3 Complete ---\n");

    printf("\n[INFO] Program finished successfully.\n");
    return 0;
}

/**
 * @brief Creates sample data files (sales.txt and results.dat)
 * for tasks 2 and 3 to ensure the program can be demonstrated.
 */
void create_sample_files() {
    printf("[INFO] Starting create_sample_files().\n");
    FILE *sales_file, *results_file;

    // Create sales.txt for Task 3
    printf("[INFO] Creating 'sales.txt' for Task 3...\n");
    sales_file = fopen("sales.txt", "w");
    if (sales_file == NULL) {
        perror("[ERROR] Failed to create 'sales.txt'");
    } else {
        fprintf(sales_file, "150.50\n200.00\n75.25\n300.00\n");
        fclose(sales_file);
        printf("[SUCCESS] 'sales.txt' created successfully.\n");
    }

    // Create results.dat for Task 2
    printf("[INFO] Creating 'results.dat' for Task 2...\n");
    results_file = fopen("results.dat", "wb");
    if (results_file == NULL) {
        perror("[ERROR] Failed to create 'results.dat'");
    } else {
        struct Student s1 = {"Alice Smith", "CS/001/20", 85};
        struct Student s2 = {"Bob Johnson", "EE/002/20", 72};
        struct Student s3 = {"Charlie Brown", "ME/003/20", 68};
        fwrite(&s1, sizeof(struct Student), 1, results_file);
        fwrite(&s2, sizeof(struct Student), 1, results_file);
        fwrite(&s3, sizeof(struct Student), 1, results_file);
        fclose(results_file);
        printf("[SUCCESS] 'results.dat' created successfully.\n");
    }
    printf("[INFO] Finished create_sample_files().\n");
}

/**
 * @brief Task 1: Appends a hardcoded book title to "borrowed_books.txt".
 */
void task1_add_book_title() {
    printf("[INFO] Starting task1_add_book_title().\n");
    char title[] = "The C Programming Language";
    FILE *file;

    printf("[INFO] Opening 'borrowed_books.txt' in append mode...\n");
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        perror("[ERROR] Could not open borrowed_books.txt");
        return;
    }

    printf("[INFO] Writing title: '%s'\n", title);
    fprintf(file, "%s\n", title);
    fclose(file);

    printf("[SUCCESS] Confirmation: Title '%s' was successfully stored.\n", title);
    printf("[INFO] Finished task1_add_book_title().\n");
}

/**
 * @brief Task 2: Reads student records from "results.dat" and displays them.
 */
void task2_read_student_results() {
    printf("[INFO] Starting task2_read_student_results().\n");
    FILE *file;
    struct Student student;

    printf("[INFO] Opening 'results.dat' in read-binary mode...\n");
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        perror("[ERROR] Could not open results.dat");
        return;
    }

    printf("[INFO] Reading student records...\n");
    printf("% -20s | %s\n", "Student Name", "Marks");
    printf("---------------------|-------\n");

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("% -20s | %d\n", student.name, student.marks);
    }

    fclose(file);
    printf("[INFO] Finished task2_read_student_results().\n");
}

/**
 * @brief Task 3: Reads transactions from "sales.txt" and calculates the total.
 */
void task3_calculate_total_sales() {
    printf("[INFO] Starting task3_calculate_total_sales().\n");
    FILE *file;
    double transaction;
    double totalSales = 0.0;

    printf("[INFO] Opening 'sales.txt' in read mode...\n");
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        perror("[ERROR] Could not open sales.txt");
        return;
    }

    printf("[INFO] Reading transactions and calculating total...\n");
    while (fscanf(file, "%lf", &transaction) != EOF) {
        totalSales += transaction;
    }

    fclose(file);

    printf("[SUCCESS] Total sales for the day: %.2f\n", totalSales);
    printf("[INFO] Finished task3_calculate_total_sales().\n");
}