int hourglassSum(vector<vector<int>> arr) {
    int a[18];
    int k = 0;
    int i,j;
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <=3 ; j++) {
            //cout << arr[i][j] << arr[i][j+1] << arr[i][j+2] << endl;
            //cout << " " <<  arr[i+1][j+1] << " " << endl;
            //cout << arr[i+2][j] << arr[i+2][j+1] << arr[i+2][j+2] << endl;
            a[k++] = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        }
    }
    return *max_element(a , a + k);
}
