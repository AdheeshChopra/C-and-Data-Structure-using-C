#include <stdio.h>
int main() {
    int sales[5][3] = {{10, 20, 30}, {15, 25, 35}, {20, 30, 40}, {25, 35, 45}, {30, 40, 50}};
    int total_sales_by_salesmen[5] = {0};
    int total_sales_of_items[3] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            total_sales_by_salesmen[i] += sales[i][j];
            total_sales_of_items[j] += sales[i][j];
        }
    }
    printf("Total sales by each salesman:\n");
    for (int i = 0; i < 5; i++) {
        printf("Salesman %d: %d\n", i+1, total_sales_by_salesmen[i]);
    }
    printf("\nTotal sales of each item:\n");
    for (int j = 0; j < 3; j++) {
        printf("Product %d: %d\n", j+1, total_sales_of_items[j]);
    }
    return 0;
}
