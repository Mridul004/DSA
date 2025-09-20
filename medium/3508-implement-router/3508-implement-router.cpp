    int getCount(int destination, int startTime, int endTime) {
        auto it = counts.find(destination);
        if (it == counts.end() || it->second.empty())
            return 0;
        vector<int>& list = it->second;
        int left = lowerBound(list, startTime);
        int right = upperBound(list, endTime);
        return right - left;
    }
};