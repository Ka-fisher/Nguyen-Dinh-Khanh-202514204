I, Bài toán
  Sắp xếp lại 1 mảng số nguyên sao cho mỗi phần tử ở vị trí lẻ (giả sử đánh số từ 0) đều lớn hơn phần tử nằm cạnh nó
  Giả sử mảng không chứa các phần tử trùng lặp.

II, Giải thuật 
  - Sắp xếp mảng số nguyên theo thứ tự tăng dần.
  - Đổi chỗ phần tử thứ i + 1 với phần tử thứ i ( i là số lẻ) cho tới cuối mảng.

III, Test case:
 1, Test case 1:
  -Input:
   n = 5
   A[] = { -2, 6, 0, 5, 8}

  - Output:
	Sorted array: A = { -2, 0, 5, 6 , 8 }
	Rearange array: A = { -2, 5, 0, 8, 6}

 2, Test case 2:
   - Input:
	 n = -1

   - Output:
	 Please enter n > 1

 3, Test case 3:
    - Input:
	n = 3
	A[] = { -10, 0, 10}

  - Output:
	Sorted array: A = { -10, 0, 10 }
	Rearange array: A = { -10, 10, 0 }
