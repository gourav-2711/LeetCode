int* getrightmax(int height[], int n) {  
    int *rightmax = malloc(n * sizeof(int));  

    rightmax[n - 1] = height[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        rightmax[i] = rightmax[i + 1] > height[i] ? rightmax[i + 1] : height[i];
    }

    return rightmax;
}

int* getleftmax(int height[], int n) {  
    int *leftmax = malloc(n * sizeof(int));  

    leftmax[0] = height[0];

    for (int i = 1; i < n; i++) {
        leftmax[i] = leftmax[i - 1] > height[i] ? leftmax[i - 1] : height[i];
    }

    return leftmax;
}

int trap(int* height, int heightSize) {
    if (heightSize == 0) return 0;  

    int *right_max = getrightmax(height, heightSize);
    int *left_max = getleftmax(height, heightSize);

    int store = 0;

    for (int i = 0; i < heightSize; i++) {  
        store += (right_max[i] < left_max[i] ? right_max[i] : left_max[i]) - height[i]; 
    }

    free(right_max);  
    free(left_max);

    return store;
}