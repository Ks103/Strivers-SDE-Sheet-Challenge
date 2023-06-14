int solve(int a[], int n) {
    int max = 0;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += a[j];
            if (sum == 0) {
                max = std::max(max, j - i + 1);
            }
        }
    }
    return max;
}
