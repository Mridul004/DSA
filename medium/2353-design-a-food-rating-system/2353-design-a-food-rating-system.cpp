    
    }
        }
            cuisineToFoods[cuisines[i]].insert({-ratings[i], foods[i]});
            foodToRating[foods[i]] = ratings[i];
            foodToCuisine[foods[i]] = cuisines[i];
        for (int i = 0; i < foods.size(); ++i) {
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
public:
    unordered_map<string, set<pair<int, string>>> cuisineToFoods;
    unordered_map<string, int> foodToRating;
    unordered_map<string, string> foodToCuisine;
class FoodRatings {