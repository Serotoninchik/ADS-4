// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
int countPairs1(int* arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    if (count == 0)
        return 0;
    return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;

int countPairs2(int* arr, int len, int value) {
    int count = 0;
    int maxlen = len - 1;
    while (arr[maxlen] > value) {
        maxlen--;
    }
    for (int lt = 0; lt < maxlen; lt++) {
        for (int rt = maxlen; lt < rt; rt--) {
            if (arr[lt] + arr[rt] == value) {
                count++;
            }
        }
    }
    if (count == 0)
        if (count == 0)
            return 0;
    return count;
}
int countPairs3(int *arr, int len, int value) {
  return 0;

int countPairs3(int* arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; ++i) {
        int h = len - 1;
        int lenght = i + 1;
        int secEl = value - arr[i];
        while (lenght <= h) {
            int midl = (lenght + h) / 2;
            if (arr[midl] == secEl) {
                count++;
                int mmid = midl - 1;
                while ((mmid > i) && (arr[mmid] == arr[midl])) {
                    count++;
                    mmid--;
                }
                int bmid = midl + 1;
                while ((i < bmid) && (arr[bmid] == arr[midl])) {
                    count++;
                    bmid++;
                }
                break;
            } else if (arr[midl] > secEl) {
                h = midl - 1;
            } else {
                lenght = midl + 1;
            }
        }
    }
    if (count)
        return count;
    return 0;
}
