I, Bài toán
Cho trước 1 mảng số nguyên A gồm n phần tử, ta cần tìm 1 cặp trong n phần tử sao cho tổng của chúng có giá trị bằng giá trị cần tìm.

II, Giải thuật
  1, Các bước thực hiện
    B1: Sắp xếp mảng A (theo thứ tự tăng đần).
    B2: Cho 2 chỉ số i (chạy từ đầu mảng) và j (chạy từ cuối mảng):
        + Nếu A[i] + A[j] = sum thì kết luận.
        + Nếu A[i] + A[j] > sum thì j - 1;
        + Nếu A[i] + A[j] < sum thì i + 1;
    B3: Tiếp tục như vậy cho tới khi i >= j mà chưa tìm được cặp thỏa mãn thì kết luận không có cặp phù hợp.

 2, Test case: 
  - Input
  A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 };
  Sum = 100

  - Output:
   Step 1: Sorted array: A[] = { 13, 13, 23, 25, 36, 57, 59, 87, 89, 111, 121, 204 }
   Step 2: A[i] + A[j] = A[0] + A[11] = 217 > 100
   Step 3: A[i] + A[j] = A[0] + A[10] = 134 > 100
   Step 4: A[i] + A[j] = A[0] + A[9] = 124 > 100
   Step 5: A[i] + A[j] = A[0] + A[8] = 102 > 100
   Step 6: Pair found: (A[0] = 13, A[7] = 87)