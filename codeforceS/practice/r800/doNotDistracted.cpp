#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        getchar();
        char tasks[n + 1];
        fgets(tasks, sizeof(tasks), stdin);

        bool suspicious = false;
        bool completed[26] = {false};
        char lastTask = ' ';

        for (int i = 0; i < n; i++) {
            char currentTask = tasks[i];

            if (currentTask < 'A' || currentTask > 'Z') {
                continue;
            }

            if (currentTask != lastTask) {
                if (completed[currentTask - 'A']) {
                    suspicious = true;
                    break;
                }
                completed[lastTask - 'A'] = true;
                lastTask = currentTask;
            }
        }

        if (suspicious) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}
