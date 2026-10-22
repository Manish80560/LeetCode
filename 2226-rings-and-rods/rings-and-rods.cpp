
class Solution {
public:
    int countPoints(string rings) {
        bool red[10] = {false};
        bool green[10] = {false};
        bool blue[10] = {false};

        for (int i = 0; i < rings.length(); i += 2) {
            char color = rings[i];
            int rod = rings[i + 1] - '0';

            if (color == 'R') {
                red[rod] = true;
            }
            else if (color == 'G') {
                green[rod] = true;
            }
            else if (color == 'B') {
                blue[rod] = true;
            }
        }

        int count = 0;

        for (int i = 0; i < 10; i++) {
            if (red[i] && green[i] && blue[i]) {
                count++;
            }
        }

        return count;
    }
};