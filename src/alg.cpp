// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
int cbinsearch(int* arr, int size, int value) {
    int lt = 0;
    int rt = size - 1;
    int midl = (rt + lt) / 2;
    int count = -1;
    while (lt <= rt) {
        if (arr[midl] == value) {
            count += 2;
            break;
        }
        if (arr[midl] > value)
            rt = midl - 1;
        else
            lt = midl + 1;
        midl = (rt + lt) / 2;
    }
    if (count == -1) return 0;
    for (int i = mid - 1; i >= 0; i--) {
        if (arr[i] == value)
            count++;
        else
            break;
    }
    for (int i = midl + 1; i <= size - 1; i++) {
        if (arr[i] == value)
            count++;
        else
            break;
    }
    return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;

int countPairs1(int* arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) count++;
        }
    }
    return count;
}
int countPairs3(int *arr, int len, int value) {
  return 0;

int countPairs2(int* arr, int len, int value) {
    int count = 0;
    int max = len - 1;
    while (arr[max] > value) max--;
    for (int i = 0; i <= max; i++) {
        for (int j = i + 1; j <= max; j++) {
            if (arr[i] + arr[j] == value) count++;
        }
    }
    return count;
}

int countPairs3(int* arr, int len, int value) {
    int count = 0;
    int max = len - 1;
    while (arr[max] > value) max--;
    for (int i = 0; i <= max; i++) {
        count += cbinsearch(arr + i + 1, max - i, value - arr[i]);
    }
    return count;
}
