#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum area of rectangle in histogram
int maxHistogram(int hist[], int n) {
    int maxArea = 0;
    int top, area, i = 0;
    int stack[n];

    while (i < n) {
        if (!top || hist[stack[top - 1]] <= hist[i]) {
            stack[top++] = i++;
        } else {
            int height = hist[stack[--top]];
            int width = top ? i - stack[top - 1] - 1 : i;
            area = height * width;

            if (area > maxArea) {
                maxArea = area;
            }
        }
    }

    while (top) {
        int height = hist[stack[--top]];
        int width = top ? i - stack[top - 1] - 1 : i;
        area = height * width;

        if (area > maxArea) {
            maxArea = area;
        }
    }

    return maxArea;
}

// Function to find the maximum size rectangle binary-sub-matrix with all 1's
int maxRectangle(int matrix[], int rows, int cols) {
    int maxArea = 0;
    int histogram[cols];

    // Initialize the first row of the histogram with the values from the first row of the matrix
    for (int j = 0; j < cols; j++) {
        histogram[j] = matrix[j];
    }

    maxArea = maxHistogram(histogram, cols);

    for (int i = 1; i < rows; i++) {
        // Update the histogram for each subsequent row
        for (int j = 0; j < cols; j++) {
            if (matrix[i * cols + j] == 0) {
                histogram[j] = 0;
            } else {
                histogram[j] += 1;
            }
        }

        int area = maxHistogram(histogram, cols);
        if (area > maxArea) {
            maxArea = area;
        }
    }

    return maxArea;
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the binary matrix (0s and 1s):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int* flattenedMatrix = (int*)malloc(rows * cols * sizeof(int));

    // Flatten the 2D matrix into a 1D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flattenedMatrix[i * cols + j] = matrix[i][j];
        }
    }

    int maxArea = maxRectangle(flattenedMatrix, rows, cols);
    printf("The maximum size rectangle binary-sub-matrix with all 1's has an area of %d\n", maxArea);

    free(flattenedMatrix);

    return 0;
}
