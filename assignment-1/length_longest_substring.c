#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int i, j, k, flag, max_count;
    
    int len = strlen(s);
    if (len == 0) return 0;
    
    char *sub = (char *)malloc((len + 1) * sizeof(char)); 
    if (sub == NULL) return 0; 

    k = 0;
    max_count = 0;
    
    for(i = 0; s[i] != '\0'; i++) {
        flag = 0;
        for(j = 0; j < k; j++) {
            if(s[i] == sub[j]) {
                flag = 1;
                break; // j is now the index of the duplicate
            }
        }
        
        if(flag == 0) {
            sub[k++] = s[i];
        } else {
            // 1. Record max_count before modifying
            if(k > max_count) {
                max_count = k;
            }
            
            // 2. Shift everything AFTER the duplicate to the front
            // If sub is ["d", "v"] and duplicate is "d" (at j=0), 
            // shift "v" to the front.
            int shift = j + 1; 
            for (int m = shift; m < k; m++) {
                sub[m - shift] = sub[m];
            }
            
            // 3. Update the length (k) and append the new character
            k = k - shift;
            sub[k++] = s[i]; 
        }
    }
    
    if (k > max_count) {
        max_count = k;
    }

    free(sub);
    return max_count;
}