            }
                }
                    break;
            if (bad) {
                deletions++;
                continue;
            }
            for (int i = 0; i < n - 1; i++) {
                if (!resolved[i] && strs[i][col] < strs[i + 1][col]) {
                    resolved[i] = true;
                    unresolved--;
                }
            }
        }
        return deletions;
    }
};