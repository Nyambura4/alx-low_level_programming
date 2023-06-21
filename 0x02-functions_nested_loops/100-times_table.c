#include <stdio.h>
/**
 * Prints the times table up to a given number.
 *
 * @param n The number to generate the times table for.
 */
void print_times_table(int n) {
// Check if n is within the valid range
if (n < 0 || n > 15) {
return;  // Exit the function without printing anything
}
// Print the times table
for (int i = 0; i <= n; i++) {
for (int j = 0; j <= n; j++) {
int product = i * j;
if (j > 0) {
printf(",   "); // Adjust spacing
}
printf("%3d", product); // Print with 3-digit spacing
}
printf("\n");
}
}
