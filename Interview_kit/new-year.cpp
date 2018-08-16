// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    set<int> seti;
    unordered_map<int,int> mapi;
    int i;
    int res = 0;
    for (i = 0; i < q.size(); i++) {
        seti.insert(q[i]);
        auto itr = seti.upper_bound(q[i]);
        res += distance(itr,seti.end());
        while (itr != seti.end()) {
            mapi[*itr] += 1;
            if (mapi[*itr] > 2) {
                cout << "Too chaotic" << endl;
                return;
            }
            itr++;
        }
        
    }
    cout << res << endl;
}
