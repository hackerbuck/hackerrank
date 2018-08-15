// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    vector<int> vec ;
    int i;
    for (i = (d % a.size()); i < a.size(); i++) {
        vec.push_back(a[i]);
    }
    for (i = 0; i < (d % a.size()); i++) {
        vec.push_back(a[i]);
    }
    return vec;
}
