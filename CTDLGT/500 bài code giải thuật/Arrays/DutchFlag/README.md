I, Bài toán
 Cho 1 mảng A chỉ gồm các phần tử 0, 1 và 2. Sắp xếp trong thười gian tuyến tính và không gian hằng số.

II, Giải thuật
- Giả sử mảng A có n phần tử. Ta khai báo 3 biến đêm gồm start, i và end: biến start và biến i chạy từ đầu mảng, biến end chạy từ cuối mảng.
- Nếu A[i] < pivot thì ta đổi chỗ A[i] với A[start], i và start tăng thêm 1.
- Nếu A[i] < pivot thì ta đổi chỗ A[i] và A[end], end  giảm đi 1.
- Nếu A[i] = pivot thì ta tăng i thêm 1.
- Cứ tiếp tục như vậy cho đến khi i > end.

III, Test case
 1, Test case 1:
  - Input:
   n = 5
   A[] = { 0, 2, 1, 0, 2}
  - Output:
   Sorted Dutch Flag array: A = { 0, 0, 1, 2, 2 }

2, Test case 2:
  - Input:
   n = 3
   A[] = { 1, 1, 1}
  - Output:
   Sorted Dutch Flag: A = { 1, 1, 1 }

3, Test case 3:
  - Input:
   n = -1
  - Output:
   Please enter n > 2!
