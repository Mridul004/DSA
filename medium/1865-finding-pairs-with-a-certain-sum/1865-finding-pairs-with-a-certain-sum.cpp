        for (int x : n2) {
            m[x]++;
        }
    }
    void add(int i, int v) {
        m[n2[i]]--;
        n2[i] += v;
        m[n2[i]]++;
    }
    int count(int t) {
        int c = 0;
        for (int x : n1) {
            c += m[t - x];
        }
        return c;
    }
};