#include <stdio.h>
  int sign(int a, int b) {
    int c;
    c = a - b;
    if (c < 0)
      return -c;
    else
      return c;
  }
int main() {
    int choice, m = 200, n, x, start, i, j, pos, min, a[15], count = 0;
    printf("\nEnter the number of requests :");
    scanf("%d", & n);
    printf("\nEnter the disk head starting position:");
    scanf("%d", & start);
    printf("\nEnter the request queue :");
    for (i = 0; i < n; i++) {
      scanf("%d", & a[i]);
    }
    do {

      printf("\n\nDISK SCHEDULING ALGORITHMS\nMENU \n1.FCFS\n2.SCAN\n3.C-SCAN");

          printf("\nEnter choice :"); scanf("%d", & choice); count = 0; x = start;
          switch (choice) {
          case 1:
            printf("\nFCFS :\n");
            printf("Scheduling services the request in the order that follows: \n % d-- > ",start);
                for (i = 0; i < n; i++) {
                  x -= a[i];
                  if (x < 0)
                    x = -x;
                  count += x;
                  x = a[i];
                  printf("%d-->", x);
                }
                printf("\nTotal Head Movement :%d Cylinders ",count*5);
                  break;
                case 2:
                  printf("\nSCAN :\n"); printf("Scheduling services the request in the order that follows: \n ");
                    count = 0; pos = 0;
                    for (i = 0; i < n; i++)
                      for (j = 0; j < n - i - 1; j++)
                        if (a[j] > a[j + 1]) {
                          x = a[j];
                          a[j] = a[j + 1];
                          a[j + 1] = x;
                        }
                    for (i = 0; i < n; i++)
                      if (a[i] < start)
                        pos++;
                    for (i = 0; i < pos; i++)
                      for (j = 0; j < pos - i - 1; j++)
                        if (a[j] < a[j + 1]) {

                          x = a[j];
                          a[j] = a[j + 1];
                          a[j + 1] = x;
                        }
                    x = start; printf("%d-->", x);
                    for (i = 0; i < pos; i++) {
                      count += sign(a[i], x);
                      x = a[i];
                      printf("%d-->", x);
                    }
                    count += sign(x, 0); x = 0; printf("%d\t", x);
                    for (i = pos; i < n; i++) {
                      count += sign(a[i], x);
                      x = a[i];
                      printf("%d\t", x);
                    }
                    printf("\nTotal Head Movement: %d Cylinders ",count*5);
                      break;
                    case 3:
                      printf("\nC-SCAN :\n"); printf("Scheduling Services the request in the order that follows: \n % d-- > ",start);
                        count = 0; pos = 0;
                        for (i = 0; i < n; i++)
                          for (j = 0; j < n - i - 1; j++)
                            if (a[j] > a[j + 1]) {
                              x = a[j];
                              a[j] = a[j + 1];
                              a[j + 1] = x;
                            }
                        for (i = 0; i < n; i++)
                          if (a[i] < start)
                            pos++; x = start;
                        for (i = pos; i < n; i++) {
                          count += sign(x, a[i]);
                          x = a[i];
                          printf("%d\t", x);
                        }
                        count += sign(m - 1, x); x = 0; printf("%d\t%d\t", m - 1, 0);
                        for (i = 0; i < pos; i++) {
                          count += sign(x, a[i]);
                          x = a[i];
                          printf("%d-->", x);
                        }
                        printf("\nTotal Head movement: %d Cylinders ",count*5);
                          break;
                        }
                      }
                    while (1);
                }