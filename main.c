#include <stdio.h>

void faulty_function(int *arr, int size) {
    int i = 0;
    for (i; i <= size; i++) { // 错误：循环条件应为 i < size
        arr[i] = (i+1) * (i+1) ;    
    }
}

int main() {
    int arr[3];
    int index;
    faulty_function(arr, 3);
    
    // 打印数组
    for (int i = 0; i < index; i++) { // 错误：index未被初始化
        printf("%d ", arr[i]);
    }	
    return 0;
}
