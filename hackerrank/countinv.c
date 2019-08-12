#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* readline();
char** split_string(char*);

// Complete the countInversions function below.
long merge(int arr[],int temp[],int p,int q,int r){
    int i=p;
    int j=q;
    int k=p;
    long inversion = 0;
    while(i<=q-1 && j<=r){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i+=1;
        }else{
            temp[k] = arr[j];
            j+=1;
           
            inversion+=q-i;
        }
        k+=1;
    }
    while(i<=q-1){
        temp[k] = arr[i];
        i+=1;
        k+=1;
    }
    while(j<=r){
        temp[k] = arr[j];
        j+=1;
        k+=1;
    }
    for(i=p;i<=r;i++){
        arr[i]=temp[i];
    }

    return inversion;
}
long mergesort(int arr[],int temp[],int p,int r){
    long count = 0;
    if(p<r){
        int q = (p+r)/2;
        count+= mergesort(arr,temp,p,q);
        count+= mergesort(arr,temp,q+1,r);
        count+= merge(arr,temp,p,q+1,r);
    }
    return count;
}
long countInversions(int arr_count, int* arr) {
    int p = 0;
    int *temp = (int*)malloc(sizeof(int)*arr_count);
    int r = arr_count-1;
    long s;
    s = mergesort(arr,temp,p,r);
    int i;
    printf("\n");
    for(i=0;i<arr_count;i++){
        printf("%d\t",*(arr+i));
    }
    printf("\n");
    return s;

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char* n_endptr;
        char* n_str = readline();
        int n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        char** arr_temp = split_string(readline());

        int* arr = malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            char* arr_item_endptr;
            char* arr_item_str = *(arr_temp + i);
            int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

            if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

            *(arr + i) = arr_item;
        }

        int arr_count = n;

        long result = countInversions(arr_count, arr);

        fprintf(fptr, "%ld\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!line) {
            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);
    } else {
        data = realloc(data, data_length + 1);

        data[data_length] = '\0';
    }

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

