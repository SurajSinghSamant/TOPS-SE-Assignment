#include <stdio.h>

int main() {
    int a[10][10] = {0};
    int i, j, low = 0, top = 9, n = 1;

    for (i = 0; i < 5; i++, low++, top--) {
        for (j = low; j <= top; j++, n++)
            a[low][j] = n;  // First row

        for (j = low + 1; j <= top; j++, n++)
            a[j][top] = n;  // Right column

        for (j = top - 1; j >= low; j--, n++)
            a[top][j] = n;  // Bottom row

        for (j = top - 1; j > low; j--, n++)
            a[j][low] = n;  // Left columnf
    }

    printf("Perfect Square : \n");
    for (i = 0; i < 10; i++) {
        printf("\n\n");
        for (j = 0; j < 10; j++) {
            printf("\t%d", a[i][j]);
        }
    }

    return 0;
}

/*debug
 Initialization:

 int a[10][10] = {0};: This declares a 10x10 array a and initializes all its elements to 0.
 int i, j, low = 0, top = 9, n = 1;: Variables i and j are loop counters, low represents the starting index of the current spiral, top represents the ending index of the current spiral, and n is the number to be placed in the array.
 
 Spiral Filling:

 The outer loop for (i = 0; i < 5; i++, low++, top--) iterates 5 times because there are 5 spirals in a 10x10 array. Each iteration fills one spiral from the outermost to the innermost layer.
 Inside this loop, there are four nested loops, each responsible for filling one side of the current spiral:
 Top Row: for (j = low; j <= top; j++, n++): Fills the top row of the current spiral with numbers from n to top.
 Right Column: for (j = low + 1; j <= top; j++, n++): Fills the right column of the current spiral with numbers from n to top.
 Bottom Row: for (j = top - 1; j >= low; j--, n++): Fills the bottom row of the current spiral with numbers from n to top.
 Left Column: for (j = top - 1; j > low; j--, n++): Fills the left column of the current spiral with numbers from n to top.
 Printing:

 After filling the array, it is printed row by row using nested loops.
 The outer loop iterates over the rows (i from 0 to 9), and the inner loop iterates over the columns (j from 0 to 9).
 Each element of the array is printed using printf("\t%d", a[i][j]);.
 Output:

 The output displays a 10x10 array filled with numbers in a spiral pattern, starting from 1 and ending at 100.
 Memory Management:

 The code doesn't involve dynamic memory allocation or deallocation, so there are no memory leaks or segmentation faults to worry about.
 Overall, the code successfully fills a 10x10 array with numbers in a spiral pattern and prints the resulting array.

 */
