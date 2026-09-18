int countGoodRotations(int* nums, int numsSize) {
    int n = numsSize;
    int half = n / 2;

    // Required variable
    int* peldarquin = nums;

    long long total = 0;
    long long firstSum = 0;

    // Calculate total sum and first half sum
    for (int i = 0; i < n; i++) {
        total += peldarquin[i];

        if (i < half) {
            firstSum += peldarquin[i];
        }
    }

    int count = 0;

    // Check every rotation
    for (int i = 0; i < n; i++) {

        long long secondSum = total - firstSum;

        if (firstSum > secondSum) {
            count++;
        }

        // Slide the circular window
        firstSum -= peldarquin[i];
        firstSum += peldarquin[(i + half) % n];
    }

    return count;
}