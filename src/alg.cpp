// Copyr 2021 NNTU-CS


int countPairs1(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if ((arr[i] + arr[j] == value) && (arr[i] >= 0 && arr[j] >= 0)) {
        count++;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int count = 0;
  int t = len - 1;
  while (arr[t] > value) {
    t--;
  }
  for (int i = 0; i < len; i++) {
    for (int j = t; j > i; j--) {
      if ((arr[i] + arr[j] == value) && (arr[i] >= 0 && arr[j] >= 0)) {
        count++;
      } else if (arr[i] + arr[j] < value) {
        break;
      }
    }
  }
  return count;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    int r = len;
    int l = i;
    while (l < r - 1) {
      int mid = (l + r) / 2;
      if (arr[i] + arr[mid] == value) {
        count++;
        int t = mid + 1;
        while ((arr[i] + arr[t] == value) && (t < r)) {
          count++;
          t++;
        }
        t = mid - 1;
        while ((arr[i] + arr[t] == value) && (t > l)) {
          count++;
          t--;
        }
        break;
      } else if (arr[i] + arr[mid] > value) {
        r = mid;
      } else {
        l = mid;
      }
    }
  }
  return count;
}
