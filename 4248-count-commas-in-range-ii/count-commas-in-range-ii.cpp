#include <cmath>
#include <algorithm>

class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000) {
            return 0;
        }

        long long count = 0;

        // k = 1: bracket [10^3, 10^6)   -> 1 comma each
        // k = 2: bracket [10^6, 10^9)   -> 2 commas each
        // k = 3: bracket [10^9, 10^12)  -> 3 commas each
        // k = 4: bracket [10^12, 10^15] -> 4 commas each
        for (int k = 1; k <= 5; k++) {
            long long lower = (long long)round(pow(10, 3 * k));       // start of bracket
            long long upper = (long long)round(pow(10, 3 * k + 3));   

            if (n < lower) {
                break; 
            }

            long long top = std::min(n, upper - 1); 
            /* long long top;
            if(n<(upper-1)){
            top = n;
            }else{
            top = upper-1;}
            */
            long long cnt = top - lower + 1;
            count += cnt * k;
        }

        return count;
    }
};