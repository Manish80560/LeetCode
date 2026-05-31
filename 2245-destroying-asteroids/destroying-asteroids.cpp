class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long planetMass = mass;

        for(int num : asteroids){
             if (planetMass < num) {
                return false;
            }
            planetMass += num;            
        }
        return true;
    }
};