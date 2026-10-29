#include <stdio.h>

int main(void) {
    int total, attended, need;
    float percent;

    printf("=== Attendance Eligibility Checker ===\n");
    printf("Total classes held: ");
    scanf("%d", &total);
    printf("Classes attended: ");
    scanf("%d", &attended);

    if (total <= 0 || attended < 0 || attended > total) {
        printf("Invalid input.\n");
        return 1;
    }

    percent = (attended * 100.0f) / total;
    printf("Attendance: %.2f%%\n", percent);

    if (percent >= 75) {
        printf("Status: Eligible for exam.\n");
    } else {
        need = 3 * total - 4 * attended; /* extra classes to reach 75% */
        printf("Status: Not eligible.\n");
        printf("Attend %d more consecutive classes to reach 75%%.\n", need);
    }
    return 0;
}
