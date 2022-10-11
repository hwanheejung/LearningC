#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* count bit 1 from integer. */
int count_1(int number, int n) {
    int cnt = 0;
    int i;
    for (i = 0; i < n; i++) {
        int tmp = number >> i;
        if (tmp % 2 == 1) cnt++;
    }

    return cnt;
}

/* check already exist in prime array. */
int is_exist(int** prime, int* target, int primeIdx, int n) {
    int i, j;
    for (i = 0; i < primeIdx; i++) {
        int cnt = 0;
        for (j = 0; j < n; j++) {
            if (target[j] == prime[i][j])
                cnt++;
        }
        if (cnt == n) return 1;
    }
    return 0;
}

/* calculate bit difference */
int bit_difference(int* a, int* b, int n) {
    int cnt = 0;
    int i;

    for (i = 0; i < n; i++) {
        // printf("[%d:%d]", a[i], b[i]);
        if (a[i] != b[i]) cnt++;
    }
    // printf("\n");

    return cnt;
}

/* if different bit exists, change it to '2' */
void bit_change(int* a, int* b, int* c, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i])
            c[i] = 2;
        else
            c[i] = a[i];
    }
}

/* copy bit src to dst. */
void bit_copy(int* dst, int* src, int n) {
    int i;
    for (i = 0; i < n; i++) {
        dst[i] = src[i];
    }
}

/* init arr */
void init(int*** arr, int* arrIdx, int n, int n2) {
    int i, j, k;
    for (i = 0; i <= n; i++) {
        arrIdx[i] = 0;
        for (j = 0; j < n2; j++) {
            for (k = 0; k < n; k++) {
                arr[i][j][k] = -1;
            }
        }
    }
}

int main() {
    int n; // num of bit.
    int n2; // num of possible number.
    char buffer[1024 * 1024]; // 1MB Buffer for input array.
    char* tmp; // for separated input integer
    int i, j, k, ii;
    int*** old, *** new, ** prime, ** used;
    int* oldIdx, * newIdx, primeIdx;
    int oi, ni, on, nn;

    printf("num of variables: ");
    scanf_s("%d", &n);
    n2 = (int)pow(3, n);
    getchar(); // becuase of new line..

    /* init buffer for quine mccluskey algorithm. */

    /*
        ** �����Ҵ� ���� ���� **
        1. old/new
            old = truth value���� ���ϱ� �� ������
            new = truth value���� ���� ������ ������ ( '-'�� ������ )
                old[i][j][k]
                    i = 1�� ����
                    j = truth value�� interger��. �ִ� 2^n���� ������. �ٸ�, '-'ǥ�ø� ���⼱ ���� 2�� �ϱ� ������, ũ��� 3^n�� �Ҵ���.
                    k = ��Ʈ �� 0~n�̴�.
                    �̷��� [i][j][k]�� 1�� i�� ������ �ִ� truth value j�� ���� k��° bit���̶�� ���� �ȴ�.
                new�� ����������.
        2. oldIdx/newIdx
            oldIdx[i] 1�� ������ i���� ������ ����.
            newIdx[i] 1�� ������ i���� ������ ����.
        3. used[i][j]
            1�� ������ i���� j��° ������ �񱳿� 1���̶� ��� �Ǿ��°�? �� �����ϴ� ��.
            �� ��Ʈ�� 1���� �޶� �񱳰� ������ old�� �� ���� used���� 1�� ���̰�, �׷��� ���� ������ ��� 0�̴�.
            ��Ʈ �� �� �� ���� 0�̶�� prime�̶�� ���̴�.
        4. prime
            ���������� prime�� ������ �����ϴ� ����
    */
    old = (int***)malloc(sizeof(int**) * (n + 1)); // cnt of '1'
    new = (int***)malloc(sizeof(int**) * (n + 1));
    used = (int**)malloc(sizeof(int*) * (n + 1));

    oldIdx = (int*)malloc(sizeof(int) * n + 1);
    newIdx = (int*)malloc(sizeof(int) * n + 1);
    for (i = 0; i <= n; i++) {
        old[i] = (int**)malloc(sizeof(int*) * n2); // // cnt of possible number.
        new[i] = (int**)malloc(sizeof(int*) * n2);
        used[i] = (int*)malloc(sizeof(int) * n2);

        prime = (int**)malloc(sizeof(int*) * n2);
        oldIdx[i] = 0;
        newIdx[i] = 0;

        for (j = 0; j < n2; j++) {
            old[i][j] = (int*)malloc(sizeof(int) * n); // cnt of bit(n)
            new[i][j] = (int*)malloc(sizeof(int) * n);
            used[i][j] = 0;
            prime[j] = (int*)malloc(sizeof(int) * n);

            for (k = 0; k < n; k++) {
                old[i][j][k] = -1;
                prime[j][k] = -1;
            }
        }
    }
    primeIdx = 0;

    /* input array. */
    printf("input true array (ex: 0 2  ... <= %d)\n > ", (int)pow(2, n) - 1);
    fgets(buffer, 1024 * 1024, stdin);
    if (buffer[strlen(buffer) - 1] == '\n')
        buffer[strlen(buffer) - 1] = '\0';

    printf("input array was : [%s]\n", buffer);

    /* make new arr from buffer */
    tmp = strtok(buffer, " ");
    while (tmp != NULL) {
        int ti = atoi(tmp);
        int cnt;

        if (ti > (int)pow(2, n) - 1 || ti < 0)
            continue;

        cnt = count_1(ti, n);
        for (i = 0; i < n; i++) {
            new[cnt][newIdx[cnt]][n - i - 1] = (ti >> i) % 2;
        }

        newIdx[cnt]++;
        tmp = strtok(NULL, " ");
    }

    /* for loop for quine mccluskey algorithm */
    /* no more possible substitution case, program ended. */

    /* 1. �� Ƚ���� �ִ� 1�� ������ ���󰣴�. ���� n������ 0������ */
    for (ii = n; ii >= 0; ii--) {
        /* 1.1 �� �κп��� �ʱ�ȭ�� �����Ѵ�. */
        /* copy new to old */
        init(old, oldIdx, n, n2);
        for (i = 0; i <= n; i++) {
            oldIdx[i] = newIdx[i];
            for (j = 0; j < n2; j++) {
                bit_copy(old[i][j], new[i][j], n);
                used[i][j] = 0;
            }
        }
        /* init new */
        init(new, newIdx, n, n2);

        /* 2. �ִ� 1�� ������ n���� �� ���� 0���� �� ���� �񱳸� �����Ѵ�. */
        for (i = n; i >= 0; i--) {
            /* 2.1 �񱳴� i�� i-1�� ���Ѵ�. i == 0�� �� ���� ó���ȴ�.*/
            if (i == 0) {
                for (j = 0; j < oldIdx[i]; j++) {
                    /* ���ݱ��� ������ �ʾҴٸ� prime. */
                    if (used[i][j] == 0 && is_exist(prime, old[i][j], primeIdx, n) == 0)
                        bit_copy(prime[primeIdx++], old[i][j], n);
                }
                continue;
            }
            /* 2.2 i > 0�̶��, 1�� ������ i��, i-1���� �׷쿡 ���ؼ� ���Ѵ�.*/
            /* j�� i���� truth values���� ��Ÿ����, k�� i-1���� truth value���� ��Ÿ����. */
            for (j = 0; j < oldIdx[i]; j++) {
                int check = 0;

                for (k = 0; k < oldIdx[i - 1]; k++) {
                    /* ��Ʈ�� ���̰� 1�ۿ� �ȳ���� */
                    if (bit_difference(old[i][j], old[i - 1][k], n) == 1) {
                        /* �ش� ��Ʈ�� 2�� �ٲپ� new�� �����Ѵ�.*/
                        bit_change(old[i][j], old[i - 1][k], new[i - 1][newIdx[i - 1]], n);

                        /* ���� ���� ���� �ִ´�. */
                        if (is_exist(new[i - 1], new[i - 1][newIdx[i - 1]], newIdx[i - 1], n) == 0) {
                            newIdx[i - 1]++;
                        }

                        /* old���� ������ üũ�Ѵ�.*/
                        used[i][j] = 1;
                        used[i - 1][k] = 1;

                        /* new�� ���� �ϳ� �߰��Ǿ����Ƿ�, Idx���� 1�� �÷��ش�.*/

                        /* old[i][j]���� �񱳿� ���Ǿ��� ���� üũ�Ѵ�.*/
                        check++;
                    }
                }

                /* old[i][j]���� �� �ѹ��� ������ �ʾҴٸ�? */
                if (check == 0 && used[i][j] == 0) {
                    /* prime�� �̹� �ִ� ���� �ƴ϶�� �� ���� prime�̴�. */
                    if (is_exist(prime, old[i][j], primeIdx, n) == 0)
                        bit_copy(prime[primeIdx++], old[i][j], n);
                }
            }
        }
    }

    /* print */
    for (i = 0; i < primeIdx; i++) {
        for (j = 0; j < n; j++) {
            if (prime[i][j] == 2)
                continue;
            printf("%c", 'A' + j);
            if (prime[i][j] == 0) {
                printf("\'");
            }
        }

        if (i != primeIdx - 1)
            printf(" + ");

    }
    printf("\n");

    /* free */

    for (i = 0; i < n; i++) {
        for (j = 0; j < n2; j++) {
            free(old[i][j]);
            free(new[i][j]);
        }

        free(old[i]);
        free(new[i]);
        free(used[i]);
    }
    for (j = 0; j < n2; j++)
        free(prime[j]);
    free(prime);

    free(old);
    free(new);
    free(used);
    free(oldIdx);
    free(newIdx);

    printf("Done.\n");
    return 0;
}