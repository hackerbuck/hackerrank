long countTriplets(vector<long> arr, long r) {
    unordered_map<long, long> left;
    unordered_map<long, long> right;
    long res = 0;
    for (int i = 0; i < arr.size(); i++) {
        right[arr[i]] += 1;
    }
    for (int i = 0; i < arr.size(); i++) {
        right[arr[i]] -= 1;
        if (arr[i] % r == 0) {
            res += left[arr[i] / r] * right [arr[i] * r];
        }    
        left[arr[i]] += 1;
    }
    return res;
}
