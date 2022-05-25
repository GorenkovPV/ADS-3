// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0, right = 0, left = size - 1;
    int mid = right + (left - right) / 2;
    if (true) {
      for (int right = 0; right < mid; right++) {
            if (arr[right] == value)
                count++;
        }
      for (int left = size; left >= mid; left--) {
            if (arr[left] == value)
                count++;
        }
        return count;
             } else {
        return 0;
           }
}
