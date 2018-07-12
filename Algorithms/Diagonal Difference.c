int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
// (0,2) (1,1) (2,0)
// (0,0) (1,1) (2,2)
// ^^^ plsss write like above carefully very imp 
    int sum1 = 0, sum2 = 0;
    int i;
    for (i = 0 ; i < arr_rows; i++) {
        sum1 += arr[i][i];
    }
    for (i = 0 ; i < arr_rows; i++) {
        sum2 += arr[i][arr_rows - i - 1];
    }
    return abs (sum1 - sum2);
}
