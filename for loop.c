#include <stdio.h>

int main() {
    char set[] = {'A', 'B', 'C'};

    // 1. Outer Loop: Count from 0 to 7 (2^3 - 1)
    for (int i = 0; i < 8; i++) {
        
        printf("{ "); // Opening bracket for the set

        // 2. Inner Loop: Check all 3 bit positions (0, 1, and 2)
        for (int j = 0; j < 3; j++) {
            
            // 3. The Mask: Shift '1' to the left by 'j' spots
            // If j=0, mask is 001. If j=1, mask is 010.
            
            // 4. The Check: Is the bit turned on?
            if (i & (1 << j)) {
                printf("%c ", set[j]); // Only print if bit is 1
            }
        }
        
        printf("}\n"); // Close the set
    }

    return 0;
}
