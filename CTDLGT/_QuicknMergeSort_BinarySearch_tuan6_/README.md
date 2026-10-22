I, Quick_Sort
 1, Giải thuật
 - Chọn 1 phần tử của dãy làm pivot (ở đây ta chọn phần tử đầu tiên của mảng).
 - Sử dụng 2 chỉ só i (chạy từ đầu mảng) và chỉ số j (chạy từ cuối) mảng để duyệt:
  + Tăng i cho đến khi A[i] > pivot.
  + Giảm j cho đến khi A[j] < pivot.
  + Nếu i < j, hoán đổi A[i] và A[j]. Tiếp tục lặp lại cho đến khi i >= j.
  + Hoán đổi pivot với A[j] để đưa pivot về đúng vị trí trong mảng.
 - Đệ quy sắp xếp 2 dãy con: Dãy từ đầu đến j - 1 và dãy từ j + 1 đến cuối.
 - Ta dừng lại khi các dãy con chỉ còn 0 hoặc 1 phần tử.

 2, Test case
  - Input:
  int A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 }

  - Output: 
  B1: A[] = { 13, 13, 23, 25, 121, 87, 36, 57, 204, 111, 89, 59 } (pivot = 23)
  B2: A[] = { 13, 13, 23, 25, 121, 87, 36, 57, 204, 111, 89, 59 } (pivot = 13)
  B3: A[] = { 13, 13, 23, 25, 121, 87, 36, 57, 204, 111, 89, 59 } (pivot = 25)
  B4: A[] = { 13, 13, 23, 25, 89, 87, 36, 57, 59, 111, 121, 204 } (pivot = 121)
  B5: A[] = { 13, 13, 23, 25, 59, 87, 36, 57, 89, 111, 121, 204 } (pivot = 89)
  B6: A[] = { 13, 13, 23, 25, 36, 57, 59, 87, 89, 111, 121, 204 } (pivot = 59)
  B7: A[] = { 13, 13, 23, 25, 36, 57, 59, 87, 89, 111, 121, 204 } (pivot = 36)
  B8: Mang sau khi sap xep: 13 13 23 25 36 57 59 87 89 111 121 204