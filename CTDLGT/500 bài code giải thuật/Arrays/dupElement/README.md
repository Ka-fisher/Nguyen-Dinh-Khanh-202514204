I, Bài toán
 Cho 1 mảng số nguyên gồm n phần tử chạy từ 1 đến n - 1 và 1 phần tử bị lặp.
 Tìm phần tử đó mà không sử dụng thêm bộ nhớ phụ.

II, Giải thuật
 Do mảng gồm n phần tử chạy từ 1 đến n - 1 và 1 phần tử bị lặp nên:
 - Ta tính tổng từ 1 đến n - 1: sum_l = n*(n-1)/2
 - Dùng vòng lặp for, ta tính tổng sum_r = tổng các phần tử của mảng.
 - Như vậy phần tử lặp = sum_r - sum_l.

III, Test case
 1, Test case 1
  - Input:
    n = 5
    A = { 1, 3, 3, 2, 4 }
  - Output:
    The duplicate element is 3.

 2, Test case 2:
   - Input:
	 n = 5
	 A[] = { 1, 4, 2, 3, 5}
   - Output:
   The element nust between 0 and 5

 3, Test case 3:
   - Input:
	 n = -1
   - Output:
	 Please enter n greater than 1

 4, Test case 4:
   - Input:
	 n = 101
   - Output:
	 Please enter n less than 100
 