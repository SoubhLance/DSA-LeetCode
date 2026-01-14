#include<iostream>
using namespace std;

class Solution {
public:
    bool isNumber(string s) {

        int digitCount = 0;      
        int dotCount = 0;       
        int eCount = 0;          
        int digitAfterE = 0;     

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            // Digit
            if (isdigit(c)) {
                digitCount++;
                if (eCount == 1)
                    digitAfterE++;
            }

            // Plus / Minus
            else if (c == '+' || c == '-') {
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E')
                    return false;
                if (i == s.size() - 1)
                    return false;
            }

            // Dot
            else if (c == '.') {
                dotCount++;
                if (dotCount > 1 || eCount == 1)
                    return false;
            }

            // Exponent
            else if (c == 'e' || c == 'E') {
                eCount++;
                if (eCount > 1 || digitCount == 0 || i == s.size() - 1)
                    return false;
            }

            // Invalid character
            else {
                return false;
            }
        }

        // Final validation
        if (digitCount == 0)
            return false;
        if (eCount == 1 && digitAfterE == 0)
            return false;

        return true;
    }
};
