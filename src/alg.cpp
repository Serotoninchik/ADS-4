// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  return 0;
int countPairs1(int * arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count++;
      }
    }
  }

  return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
int countPairs2(int * arr, int len, int value) {
  int count = 0;
  int r = len - 1;

  while (arr[r] > value) {
    r--;
  }

  for (int l = 0; l < r; l++) {
    for (int r = r; r > l; r--) {
      if (arr[l] + arr[r] == value) {
        count++;
      }
    }
  }

  return count;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
int countPairs3(int * arr, int len, int value) {
  int count = 0;

  for (int i = 0; i < len; i++) {
    int l = i + 1;
    int r = len - 1;
    int target = value - arr[i];

    while (l <= r) {
      int mid = (l + r) / 2;

      if (arr[mid] == target) {
        count++;
        int tempMid = mid - 1;

        while (tempMid > i && arr[tempMid] == target) {
          count++;
          tempMid--;
        }

        tempMid = mid + 1;

        while (tempMid < len - 1 && arr[tempMid] == target) {
          count++;
          tempMid++;
        }

        break;
      } else if (arr[mid] < target) {
        left = mid + 1;
      } else {
        r = mid - 1;
      }
    }
  }

  return count;
}
