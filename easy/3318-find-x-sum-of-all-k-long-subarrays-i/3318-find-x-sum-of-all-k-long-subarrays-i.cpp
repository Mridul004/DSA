                if (a.second == b.second) return a.first > b.first;
                return a.second > b.second;
            });
            unordered_set<int> top_x;
            for (int j = 0; j < items.size() && j < x; j++) {
                top_x.insert(items[j].first);
            }
            int x_sum = 0;
            for (int num : sub) {
                if (top_x.count(num)) x_sum += num;
            }
            ans.push_back(x_sum);
        }
        return ans;
    }