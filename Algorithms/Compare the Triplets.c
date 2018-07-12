int* solve(int a_count, int* a, int b_count, int* b, int* result_count) {

    // The main thing to note here , u cannot return simply array , just do calloc (arr_size, type_size) 
    // Using calloc instead of malloc here coz we can get 0 intialized array here !
    
    int *res = calloc (2 , sizeof (int));
    int i;
    *result_count = 2;
    for (i = 0; i < a_count ; i++ ) {
        if (a[i] > b[i]) {
            res[0]++;
        } else if (a[i] < b[i]) {
            res[1]++;
        }
    }
    return res;
}
