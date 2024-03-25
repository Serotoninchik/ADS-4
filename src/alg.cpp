// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
#include <unistd.h>
#include <iostream>
#include <algorithm>

int countPairs3(int* arr, int len, int value);
int countPairs1(int* arr, int len, int value) {
    int in = 0;
    while (in < 10000000) {
        in++;
    }
    int count = 0;
    int r = len - 1;
    while (arr[r] >= value)
        r--;
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if ((arr[i] + arr[j]) == value) {
                count++;
            }
        }
    }
    if (count)
        return count;
    return 0;
}
int countPairs2(int *arr, int len, int value) {
  return 0;

int countPairs2(int* arr, int len, int value) {
    sleep(2);
    int ooo = 0;
    int r = len - 1;
    int g = value - arr[0];
    while (arr[r] >= value)
        r--;
    return countPairs3(arr, len, value);
}
int countPairs3(int *arr, int len, int value) {
  return 0;

int countPairs3(int* arr, int len, int value) {
    int count = 0;
    int l;
    int r, mid, SecVal;
    for (int i = 0; i < len; ++i) {
        r = len - 1;
        l = i + 1;
        SecVal = value - arr[i];
        while (l <= r) {
            mid = (l + r) / 2;
            if (arr[mid] == SecVal) {
                count++;
                int p = middle - 1;
                while ((p > i) && (arr[p] == arr[mid])) {
                    count++;
                    p--;
                }
                int p2 = mid + 1;
                while ((i < p2) && (arr[p2] == arr[mid])) {
                    count++;
                    p2++;
                }
                break;
            } else if (arr[mid] > SecVal) {
                r = mid - 1;
            } else {
                lft = mid + 1;
            }
        }
    }
    if (count)
        return count;
    return 0;
}
