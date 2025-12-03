#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int arr[9][9];
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (scanf("%d", &arr[i][j]) != 1) {
                return 1;
            }
        }
    }

    bool is_valid = true;
    int seen[10];
    
    for (int i = 0; i < 9; i++) {
        
        // Row Check
        memset(seen, 0, sizeof(seen));

        for (int j = 0; j < 9; j++) {
            int num = arr[i][j];
            if (num < 1 || num > 9 || seen[num] > 0) {
                is_valid = false;
                break;
            }
            seen[num] = 1;
        }
        if (!is_valid) break;

        // Column Check
        memset(seen, 0, sizeof(seen));

        for (int k = 0; k < 9; k++) {
            int num = arr[k][i];
            if (num < 1 || num > 9 || seen[num] > 0) {
                is_valid = false;
                break;
            }
            seen[num] = 1;
        }
        if (!is_valid) break;
    }

    if (is_valid) {
        for (int block_row = 0; block_row < 9; block_row += 3) {
            for (int block_col = 0; block_col < 9; block_col += 3) {
                
                // 3x3 Block Check
                memset(seen, 0, sizeof(seen)); 
                
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        int num = arr[block_row + i][block_col + j];
                        
                        if (num < 1 || num > 9 || seen[num] > 0) {
                            is_valid = false;
                            break;
                        }
                        seen[num] = 1;
                    }
                    if (!is_valid) break;
                }

                if (!is_valid) break;
            }
            if (!is_valid) break;
        }
    }
    
    if (is_valid) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}