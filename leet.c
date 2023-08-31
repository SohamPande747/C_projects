#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define R 4
#define C 4

struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, int item) {
    stack->array[++stack->top] = item;
}

int pop(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return INT_MIN;
}

int top(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top];
    return INT_MIN;
}

int maxHist(int row[]) {
    struct Stack* result = createStack(C);
    int top_val;
    int max_area = 0;
    int area = 0;
    int i = 0;
    
    while (i < C) {
        if (isEmpty(result) || row[top(result)] <= row[i])
            push(result, i++);
        else {
            top_val = row[top(result)];
            pop(result);
            area = top_val * i;
            
            if (!isEmpty(result))
                area = top_val * (i - top(result) - 1);
            if (area > max_area)
                max_area = area;
        }
    }
    
    while (!isEmpty(result)) {
        top_val = row[top(result)];
        pop(result);
        area = top_val * i;
        
        if (!isEmpty(result))
            area = top_val * (i - top(result) - 1);
        if (area > max_area)
            max_area = area;
    }
    
    free(result->array);
    free(result);
    
    return max_area;
}

int maxRectangle(int A[][C]) {
    int result = maxHist(A[0]);
    
    for (int i = 1; i < R; i++) {
        for (int j = 0; j < C; j++)
            if (A[i][j])
                A[i][j] += A[i - 1][j];
        result = result > maxHist(A[i]) ? result : maxHist(A[i]);
    }
    
    return result;
}

int main() {
    int A[R][C] = {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 }
    };
    
    printf("Area of maximum rectangle is %d\n", maxRectangle(A));
    
    return 0;
}
