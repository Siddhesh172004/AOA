#include <stdio.h>
#include <stdlib.h>
static int totalnodes;
void printarray(int A[], int size) {
    for (int i = 0;i < size;i++) {
        printf("\t %d", A[i]);
    }
    printf("\n");

}

void subset(int s[], int tupple_vector[], int set_size, int t_size, int sum, int ite, int target_sum) {
    totalnodes++;
    if (sum == target_sum) {
        printarray(tupple_vector, t_size);
        return;
        subset(s, tupple_vector, set_size, t_size - 1, sum - s[ite], ite + 1, target_sum);
    }
    else {
        for (int i = ite;i < set_size;i++) {
            tupple_vector[t_size] = s[i];
            subset(s, tupple_vector, set_size, t_size + 1, sum + s[i], i + 1, target_sum);

        }
    }


}


void generatesubset(int s[], int set_size, int target_sum) {
    int tupple_vector = (int*)malloc(set_size * sizeof(int));
    subset(s, tupple_vector, set_size, 0, 0, 0, target_sum);
    free(tupple_vector);
}

int main() {
    int set[] = { 5, 10, 12, 13, 15, 18 };
    int set_size = sizeof(set) / sizeof(set[0]);
    int target_sum = 30;
    printarray(set, set_size);

    generatesubset(set, set_size, target_sum);


}
