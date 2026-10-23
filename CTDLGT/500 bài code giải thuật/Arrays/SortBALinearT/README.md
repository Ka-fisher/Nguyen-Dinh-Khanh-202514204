I, Bài toán
 Sắp xếp 1 mảng nhị phân theo thứ tự không giảm, đảm bảo thời gian tuyến tính

II, Giải thuật 
  - Tạo biến dem0 dùng để đếm số lượng số 0 có trong mảng (giả sử mảng gồm n phần tử, trong đó có a số 0)
  - Gán 0 cho a phần tử đầu của mảng, các phần tử còn lại ta gán 1.

III, Test case:
 1, Test case 1:
  -Input:
   n = 5
   A[] = { 0, 1, 1, 0, 0}

  - Output:
	Number of zeros: 3
	Sorted binary array: A = { 0, 0, 0, 1, 1 }

 2, Test case 2:
  - Input:
	n = 3
	A[] = { 1, 1, 1}
  - Output:
	Number of zeros: 0
	Sorted binary array: A = { 1, 1, 1 }

 3, Test case 3:
   - Input:
	 n = -1
   - Output:
	 Please enter an positive number!

 4, Test case 4:
   - Input:
	 n = 3
	 A[] = { 0, 1, 2}
   - Output:
	Error input at A[2]!
