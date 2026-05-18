## 1. (TRR1_1009) Phương trình 01
**Nội dung:**
Cho trước hai số thực $a$ và $b$. Xét mệnh đề $p =$ "Phương trình $ax + b = 0$ có ít nhất một nghiệm thực âm".
Yêu cầu: Xác định giá trị của $p$ với hai số thực $a$ và $b$ đã cho. (Giá trị 1 nếu đúng, 0 nếu sai).
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa hai số thực $a$ và $b$.
Kết quả: Ghi ra tệp Output chuẩn là giá trị của $p$.

**Test Case:**
Input: 5.0 7.5
Expected Output: 1

---

## 2. (TRR1_1010) Phương trình 02
**Nội dung:**
Cho trước ba số thực $a, b$ và $c$. Xét mệnh đề $p =$ "Phương trình $ax^2 + bx + c = 0$ có ít nhất một nghiệm thực dương".
Yêu cầu: Xác định giá trị của $p$ với ba số thực $a, b$ và $c$ đã cho.
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa ba số thực $a, b$ và $c$.
Kết quả: Ghi ra tệp Output chuẩn là giá trị của $p$.

**Test Case:**
Input: 5.0 7.5 1.3
Expected Output: 0

---

## 3. (TRR1_1011) Phương trình 03
**Nội dung:**
Cho trước ba số thực $a, b$ và $c$. Xét mệnh đề $p =$ "Phương trình $ax^4 + bx^2 + c = 0$ có ít nhất một nghiệm thực".
Yêu cầu: Xác định giá trị của $p$ với ba số thực $a, b$ và $c$ đã cho.
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa ba số thực $a, b$ và $c$.
Kết quả: Ghi ra tệp Output chuẩn là giá trị của $p$.

**Test Case:**
Input: 5.0 -7.5 1.3
Expected Output: 1

---


## 4. (TRR1_1017) Tập hợp 01 (Hợp của hai tập hợp)
**Nội dung:**
Xét tập hợp $S$ gồm $n$ số nguyên dương đầu tiên. Mỗi tập con $A$ của $S$ có thể được biểu diễn dưới dạng xâu nhị phân $X$ độ dài $n$, trong đó $X[i] = 1$ nếu số $i$ ($1 \le i \le n$) là phần tử của $A$ và $X[i] = 0$ trong trường hợp ngược lại.
Cho trước hai tập con $A$ và $B$ của tập $S$.
Yêu cầu: Xác định các phần tử của tập hợp là hợp của hai tập $A$ và $B$.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa số nguyên dương $n$ không vượt quá 1000.
- Trong hai dòng tiếp theo, mỗi dòng chứa một xâu nhị phân độ dài $n$ biểu diễn tập con $A$ và $B$.
Kết quả: Ghi ra tệp Output chuẩn gồm 2 dòng:
- Dòng đầu ghi số $k$ là số lượng phần tử của tập hợp là hợp của hai tập $A$ và $B$.
- Trong trường hợp $k > 0$, dòng thứ 2 ghi $k$ số là các phần tử của tập hợp là hợp của hai tập $A$ và $B$ theo thứ tự tăng.

**Test Case:**
Input:
5
0 1 0 0 1
1 1 0 0 0
Expected Output:
3
1 2 5

---

## 5. (TRR1_1018) Tập hợp 02 (Giao của hai tập hợp)
**Nội dung:**
Xét tập hợp $S$ gồm $n$ số nguyên dương đầu tiên. Mỗi tập con $A$ của $S$ có thể được biểu diễn dưới dạng xâu nhị phân $X$ độ dài $n$, trong đó $X[i] = 1$ nếu số $i$ ($1 \le i \le n$) là phần tử của $A$ và $X[i] = 0$ trong trường hợp ngược lại.
Cho trước hai tập con $A$ và $B$ của tập $S$.
Yêu cầu: Xác định các phần tử của tập hợp là giao của hai tập $A$ và $B$.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa số nguyên dương $n$ không vượt quá 1000.
- Trong hai dòng tiếp theo, mỗi dòng chứa một xâu nhị phân độ dài $n$ biểu diễn tập con $A$ và $B$.
Kết quả: Ghi ra tệp Output chuẩn gồm 2 dòng:
- Dòng đầu ghi số $k$ là số lượng phần tử của tập hợp là giao của hai tập $A$ và $B$.
- Trong trường hợp $k > 0$, dòng thứ 2 ghi $k$ số là các phần tử của tập hợp là giao của hai tập $A$ và $B$ theo thứ tự tăng.

**Test Case:**
Input:
5
0 1 1 0 1
1 1 0 1 1
Expected Output:
2
2 5

---


## 6. (TRR1_2002) Đếm số 02
**Nội dung:**
Cho trước bốn số nguyên dương $a, b, k$ và $m$.
Yêu cầu: Tìm số lượng $t$ các số nguyên dương trong phạm vi từ $a$ đến $b$ là bội của $k$ hoặc $m$.
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa bốn số nguyên dương $a, b, k$ và $m$, mỗi số không vượt quá $2^{18}$ và $a \le b$.
Kết quả: Ghi ra tệp Output chuẩn giá trị $t$ tìm được.

**Test Case:**
Input: 1 10 2 3
Expected Output: 7

---

## 7. (TRR1_2005) Đếm số hình vuông
**Nội dung:**
Cho trước $n$ ô vuông đơn vị với cạnh là 1.
Yêu cầu: Tìm số lượng $t$ lớn nhất các hình vuông có kích thước cạnh là các số nguyên khác nhau có thể tạo được từ $n$ ô vuông đã cho.
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa số nguyên dương $n$ không vượt quá $2^{18}$.
Kết quả: Ghi ra tệp Output chuẩn giá trị $t$ tìm được.

**Test Case:**
Input: 10
Expected Output: 2

---

## 8. (TRR1_2009) Đếm phân số
**Nội dung:**
Cho trước số nguyên dương $n$ không vượt quá $10^4$.
Yêu cầu: Tìm số lượng $t$ các phân số khác nhau có tử số và mẫu số là các số nguyên $a, b$, trong đó $0 \le a \le b, 1 \le b \le n$.
Dữ liệu: Vào từ tệp Input chuẩn chứa số nguyên dương $n$ không vượt quá $10^4$.
Kết quả: Ghi ra tệp Output chuẩn giá trị $t$ tìm được.

**Test Case:**
Input: 4
Expected Output: 7

---



## 9. (TRR1_2011) Xâu nhị phân 01
**Nội dung:**
Cho trước hai số nguyên dương $n$ và $k$.
Yêu cầu: Tìm số lượng $t$ các xâu nhị phân độ dài $n$ không chứa $k$ chữ số 0 liên tiếp.
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa hai số nguyên dương $n, k$ không vượt quá 50 và $2 \le k \le n$.
Kết quả: Ghi ra tệp Output chuẩn giá trị $t$ tìm được.

**Test Case:**
Input: 3 2
Expected Output: 5

---

## 10. (TRR1_2014) Xâu nhị phân 04
**Nội dung:**
Cho trước hai số nguyên dương $n$ và $k$.
Yêu cầu: Tìm số lượng $t$ các xâu nhị phân độ dài $n$ có chứa $k$ chữ số 1 liên tiếp.
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa hai số nguyên dương $n, k$ không vượt quá 50 và $2 \le k \le n$.
Kết quả: Ghi ra tệp Output chuẩn giá trị $t$ tìm được.

**Test Case:**
Input: 3 2
Expected Output: 3


## 11. (TRR1_2040) Xâu nhị phân 14
**Nội dung:**
Cho trước hai số nguyên dương $n$ và $s$.
Yêu cầu: Tìm số lượng các xâu nhị phân độ dài $n$ có tổng các chữ số bằng $s$.
Dữ liệu: Vào từ tệp Input chuẩn gồm một dòng chứa hai số nguyên dương $n, s$ không vượt quá 50 và $s \le n$.
Kết quả: Ghi ra tệp Output chuẩn giá trị $t$ tìm được.

**Test Case:**
Input: 3 1
Expected Output: 3

---

## 12. (TRR1_3006) Liệt kê hoán vị trước 01
**Nội dung:**
Cho trước số nguyên dương $n$ và một hoán vị của $n$ số nguyên dương đầu tiên.
Yêu cầu: Sử dụng thuật toán sinh hoán vị theo thứ tự từ điển, tìm hoán vị liền kề trước của hoán vị đã cho.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa số nguyên dương $n$, với $3 \le n \le 100$.
- Dòng tiếp theo chứa $n$ số là một hoán vị của $n$ số nguyên dương đầu tiên.
Kết quả: Ghi ra tệp Output chuẩn gồm 1 dòng là hoán vị tìm được. Trong trường hợp không tìm được hoán vị thì ghi số 0 thay thế.

**Test Case:**
Input: 
5
3 1 2 5 4
Expected Output: 3 1 2 4 5

---

## 13. (TRR1_3008) Liệt kê tổ hợp trước 01
**Nội dung:**
Cho trước hai số nguyên dương $n, k$ và một tổ hợp chập $k$ của $n$ số nguyên dương đầu tiên.
Yêu cầu: Sử dụng thuật toán sinh tổ hợp theo thứ tự từ điển, liệt kê tổ hợp liền kề trước của tổ hợp đã cho.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa hai số nguyên dương $n$ và $k$, với $3 \le n \le 100; k \le n$.
- Dòng tiếp theo chứa $k$ số là một tổ hợp chập $k$ của $n$ số nguyên dương đầu tiên.
Kết quả: Ghi ra tệp Output chuẩn tổ hợp liền kề trước của tổ hợp đã cho. Trong trường hợp không tìm được tổ hợp thì ghi số 0 thay thế.

**Test Case:**
Input:
5 3
1 2 5
Expected Output: 1 2 4

---

## 14. (TRR1_3011) Liệt kê một phần hoán vị
**Nội dung:**
Cho trước số nguyên dương $n$ và một hoán vị của $n$ số nguyên dương đầu tiên.
Yêu cầu: Sử dụng thuật toán sinh hoán vị theo thứ tự từ điển, liệt kê $t$ hoán vị liền kề tiếp theo của hoán vị đã cho.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa hai số nguyên dương $n$ và $t, t \le 100$.
- Dòng tiếp theo chứa $n$ số là một hoán vị của $n$ số nguyên dương đầu tiên.
Kết quả: Ghi ra tệp Output chuẩn gồm $t$ dòng, mỗi dòng ghi một hoán vị theo thứ tự tìm được. Trong trường hợp không tìm được hoán vị thì ghi số 0 thay thế.

**Test Case:**
Input:
5 2
3 1 2 5 4
Expected Output:
3 1 4 2 5
3 1 4 5 2

---

## 15. (TRR1_3015) Liệt kê một phần xâu nhị phân sử dụng phương pháp sinh thuận
**Nội dung:**
Cho trước hai số nguyên dương $n, t$ và một xâu nhị phân độ dài $n$.
Yêu cầu: Sử dụng phương pháp sinh xâu nhị phân kế tiếp theo thứ tự từ điển, liệt kê $t$ xâu nhị phân liền kề tiếp theo của xâu nhị phân đã cho.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa hai số nguyên dương $n$ và $t, 3 \le n, t \le 100$.
- Dòng tiếp theo chứa $n$ số 0 hoặc 1 là một xâu nhị phân độ dài $n$.
Kết quả: Ghi ra tệp Output chuẩn gồm $t$ dòng, mỗi dòng ghi một xâu nhị phân theo thứ tự tìm được. Trong trường hợp không tìm được xâu nhị phân thì ghi số 0 thay thế.

**Test Case:**
Input:
5 2
1 0 0 0 1
Expected Output:
1 0 0 1 0
1 0 0 1 1

---

## 16. (TRR1_3016) Liệt kê một phần xâu nhị phân sử dụng phương pháp sinh ngược
**Nội dung:**
Cho trước hai số nguyên dương $n, t$ và một xâu nhị phân độ dài $n$.
Yêu cầu: Sử dụng phương pháp sinh xâu nhị phân kế tiếp theo thứ tự ngược với thứ tự từ điển, liệt kê $t$ xâu nhị phân liền kề tiếp theo của xâu nhị phân đã cho.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa hai số nguyên dương $n$ và $t, 3 \le n, t \le 100$.
- Dòng tiếp theo chứa $n$ số 0 hoặc 1 là một xâu nhị phân độ dài $n$.
Kết quả: Ghi ra tệp Output chuẩn gồm $t$ dòng, mỗi dòng ghi một xâu nhị phân theo thứ tự tìm được. Trong trường hợp không tìm được xâu nhị phân thì ghi số 0 thay thế.

**Test Case:**
Input:
5 2
1 0 1 0 1
Expected Output:
1 0 1 0 0
1 0 0 1 1

---

## 17. (TRR1_3024) Liệt kê hoán vị có điều kiện sử dụng phương pháp quay lui
**Nội dung:**
Cho trước hai số nguyên dương $n$ và $k$.
Yêu cầu: Liệt kê tất cả các hoán vị của tập gồm $n$ số nguyên dương đầu tiên sử dụng phương pháp quay lui, trong đó $k$ vị trí của hoán vị có giá trị trước.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa hai số nguyên dương $n$ và $k$, với $3 \le n \le 20, k \le n$.
- Trong $k$ dòng tiếp theo, dòng thứ $i$ ($1 \le i \le k$) chứa hai số nguyên dương $u$ và $v, 1 \le u, v \le n$, với ý nghĩa vị trí $u$ của hoán vị là số $v$.
Kết quả: Ghi ra tệp Output chuẩn gồm nhiều dòng, mỗi dòng một hoán vị tìm được theo thứ tự xuất hiện trong quá trình liệt kê. Nếu không có hoán vị nào thỏa mãn thì ghi ra giá trị 0.

**Test Case:**
Input:
3 1
1 2
Expected Output:
2 1 3
2 3 1

---

## 18. (TRR1_3025) Liệt kê tổ hợp có điều kiện sử dụng phương pháp quay lui (Dạng 1)
**Nội dung:**
Cho trước ba số nguyên dương $n, k$ và $t$.
Yêu cầu: Sử dụng phương pháp quay lui, liệt kê tất cả các tổ hợp gồm $k$ phần tử của $n$ số nguyên dương đầu tiên, trong đó phần tử thứ nhất của tổ hợp nhận giá trị $t$.
Dữ liệu: Vào từ tệp Input chuẩn một dòng chứa ba số nguyên dương $n, k$ và $t$, với $3 \le n \le 30, k, t \le n$.
Kết quả: Ghi ra tệp Output chuẩn gồm nhiều dòng, mỗi dòng một tổ hợp tìm được theo thứ tự xuất hiện trong quá trình liệt kê. Nếu không có tổ hợp thỏa mãn thì ghi ra giá trị 0.

**Test Case:**
Input: 5 3 2
Expected Output:
2 3 4
2 3 5
2 4 5

---

## 19. (TRR1_3026) Liệt kê tổ hợp có điều kiện sử dụng phương pháp quay lui (Dạng 2)
**Nội dung:**
Cho trước ba số nguyên dương $n, k$ và $t$.
Yêu cầu: Sử dụng phương pháp quay lui, liệt kê tất cả các tổ hợp gồm $k$ phần tử của $n$ số nguyên dương đầu tiên, trong đó phần tử thứ $k$ của tổ hợp nhận giá trị $t$.
Dữ liệu: Vào từ tệp Input chuẩn một dòng chứa ba số nguyên dương $n, k$ và $t$, với $3 \le n \le 30, k, t \le n$.
Kết quả: Ghi ra tệp Output chuẩn gồm nhiều dòng, mỗi dòng một tổ hợp tìm được theo thứ tự xuất hiện trong quá trình liệt kê. Nếu không có tổ hợp thỏa mãn thì ghi ra giá trị 0.

**Test Case:**
Input: 5 3 4
Expected Output:
1 2 4
1 3 4
2 3 4

---

## 20. (TRR1_3027) Liệt kê xâu nhị phân có điều kiện sử dụng phương pháp quay lui
**Nội dung:**
Cho trước hai số nguyên dương $n$ và $k$.
Yêu cầu: Liệt kê tất cả các xâu nhị phân độ dài $n$ theo thứ tự từ điển sử dụng phương pháp quay lui, trong đó $k$ vị trí của xâu nhị phân đã cho trước giá trị.
Dữ liệu: Vào từ tệp Input chuẩn:
- Dòng đầu chứa hai số nguyên dương $n$ và $k$, với $3 \le n \le 100, k \le n$.
- Trong $k$ dòng tiếp theo, dòng thứ $i$ ($1 \le i \le k$) chứa hai số nguyên dương $u$ và $v, 1 \le u \le n, 0 \le v \le 1$, với ý nghĩa vị trí $u$ của xâu nhị phân là số $v$.
Kết quả: Ghi ra tệp Output chuẩn gồm nhiều dòng, mỗi dòng một xâu nhị phân tìm được theo thứ tự xuất hiện trong quá trình liệt kê. Nếu không có xâu nhị phân nào thỏa mãn thì ghi ra giá trị 0.

**Test Case:**
Input:
3 1
2 1
Expected Output:
0 1 0
0 1 1
1 1 0
1 1 1