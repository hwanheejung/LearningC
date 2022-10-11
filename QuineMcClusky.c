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
    scanf("%d", &n);
    n2 = (int)pow(3, n);
    getchar(); // becuase of new line..

    /* init buffer for quine mccluskey algorithm. */

    /*
        ** 동적할당 변수 설명 **
        1. old/new
            old = truth value들을 비교하기 전 데이터
            new = truth value들을 비교한 이후의 데이터 ( '-'를 포함함 )
                old[i][j][k]
                    i = 1의 갯수
                    j = truth value의 interger값. 최대 2^n까지 가능함. 다만, '-'표시를 여기선 숫자 2로 하기 때문에, 크기는 3^n을 할당함.
                    k = 비트 수 0~n이다.
                    이렇게 [i][j][k]는 1을 i개 가지고 있는 truth value j에 대한 k번째 bit값이라고 보면 된다.
                new도 마찬가지다.
        2. oldIdx/newIdx
            oldIdx[i] 1의 갯수가 i개인 변수의 갯수.
            newIdx[i] 1의 갯수가 i개인 변수의 갯수.
        3. used[i][j]
            1의 갯수가 i개인 j번째 변수가 비교에 1번이라도 사용 되었는가? 를 저장하는 값.
            즉 비트가 1개만 달라 비교가 가능한 old의 두 값은 used값이 1일 것이고, 그렇지 않은 값들은 모두 0이다.
            비트 비교 후 이 값이 0이라면 prime이라는 뜻이다.
        4. prime
            최종적으로 prime인 값들을 저장하는 공간
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

    /* 1. 비교 횟수는 최대 1의 갯수를 따라간다. 따라서 n번부터 0번까지 */
    for (ii = n; ii >= 0; ii--) {
        /* 1.1 이 부분에서 초기화를 진행한다. */
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

        /* 2. 최대 1의 갯수가 n개일 때 부터 0개일 때 까지 비교를 진행한다. */
        for (i = n; i >= 0; i--) {
            /* 2.1 비교는 i와 i-1를 비교한다. i == 0일 땐 따로 처리된다.*/
            if (i == 0) {
                for (j = 0; j < oldIdx[i]; j++) {
                    /* 지금까지 사용되지 않았다면 prime. */
                    if (used[i][j] == 0 && is_exist(prime, old[i][j], primeIdx, n) == 0)
                        bit_copy(prime[primeIdx++], old[i][j], n);
                }
                continue;
            }
            /* 2.2 i > 0이라면, 1의 갯수가 i개, i-1개인 그룹에 대해서 비교한다.*/
            /* j는 i개인 truth values들을 나타내고, k는 i-1개인 truth value들을 나타낸다. */
            for (j = 0; j < oldIdx[i]; j++) {
                int check = 0;

                for (k = 0; k < oldIdx[i - 1]; k++) {
                    /* 비트의 차이가 1밖에 안날경우 */
                    if (bit_difference(old[i][j], old[i - 1][k], n) == 1) {
                        /* 해당 비트를 2로 바꾸어 new에 저장한다.*/
                        bit_change(old[i][j], old[i - 1][k], new[i - 1][newIdx[i - 1]], n);

                        /* 값이 있을 때만 넣는다. */
                        if (is_exist(new[i - 1], new[i - 1][newIdx[i - 1]], newIdx[i - 1], n) == 0) {
                            newIdx[i - 1]++;
                        }

                        /* old들이 사용됨을 체크한다.*/
                        used[i][j] = 1;
                        used[i - 1][k] = 1;

                        /* new에 값이 하나 추가되었으므로, Idx값도 1개 올려준다.*/

                        /* old[i][j]값이 비교에 사용되었는 지를 체크한다.*/
                        check++;
                    }
                }

                /* old[i][j]값이 단 한번도 사용되지 않았다면? */
                if (check == 0 && used[i][j] == 0) {
                    /* prime에 이미 있는 값이 아니라면 이 값은 prime이다. */
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
