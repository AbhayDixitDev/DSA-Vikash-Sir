#include <iostream>

int main() {
    int arr[] = {10, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prod[n];

    // Initialize the product array
    for (int i = 0; i < n; i++) {
        prod[i] = 1; // Initialize all products to 1
    }

    // Calculate products of elements to the left of each index
    int left_product = 1; // 10,3,5,6,2 //600
    for (int i = 0; i < n; i++) { 
        prod[i] = left_product; // Set the product for the current index
        left_product *= arr[i]; // Update the left product for the next index
    }   

    // Calculate products of elements to the right of each index
    int right_product = 1;
    for (int i = n - 1; i >= 0; i--) { //  600
        prod[i] *= right_product; // Multiply with the right product
        right_product *= arr[i]; // Update the right product for the previous index
    }

    // Output the product array
    for (int i = 0; i < n; i++) {
        std::cout << prod[i] << " ";
    }
    
    return 0;
}