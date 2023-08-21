#include <stdio.h>

int main() {
    int arr[10] = {2, 4, 6, 8, 4, 10, 12, 6, 14, 16};          
    int n = 10; 

    
    for (int i = 0; i < n; i++) {
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate found: %d\n", arr[i]);
                break; 
            }
        }
    }

    return 0;
}
