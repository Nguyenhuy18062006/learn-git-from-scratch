alert("Xin chaò");
let userName = prompt("Nhập tên của bạn vào: ");
console.log("Tên của bạn là: " + userName);
alert("Chào mừng: " + userName);
let birthUser = prompt("Nhập tuổi của bạn:");
console.log("Tuổi của bạn là:" + birthUser);
alert("Tuổi của bạn là: " + birthUser);
//BAi 6 các kiểu dữ liệu
let myString = "abc";
console.log(myString);
let soNguyen = 12;
console.log(soNguyen);
let check = true;
let connect = null;
//Bai 7 Nhập và các kiểu in
let so1 = prompt("Nhập số thứ nhất:");
let so2 = prompt("Nhập số thứ hai:");
let so3 = Number(so1) + Number(so2);
console.log("Kết quả của " + so1 + " cộng " + so2 + " là: " + so3);
console.log("Kết quả của", so1, "cộng", so2, "là:", so3);
console.log(`Kết quả của ${so1} cộng ${so2} là: ${so3}`);
console.log(`Kết quả của %s cộng %s là: %s`, so1, so2, so3);
//Bài 8 ép kiểu dữ liệu
let numberA = parseInt(prompt("Nhập số A: "));
let numberB = parseFloat(prompt("Nhập số B: "));
let numberC = Number(prompt("Nhập số C: "));
console.log(numberA);
console.log(numberB);
console.log(numberC);
//Bài 9Toán tử gán
numberA = numberA + 10;
console.log(numberA);
//Hoặc
numberB += 10;
console.log(numberB);
//Bài 10 toán tử tăng giảm
numberC++;
console.log(numberC);
//Bai 11 toán tử logic
let i = Number(prompt("Nhập giá trị i: "));
console.log(i > 0 && i < 10); //Kiêm tra cả 2 đk đúng cả 2 mới chạy trả kết quả True/Fall
console.log(i > 0 || i < 10); //Kiểm tra 1 trong 2 nếu đúng thì trả kết quả True/Fall
console.log(!(i > 0 || i < 10)); //Kiểm tả 1 trong 2 nhưng theo dạng phủ định lại
//Bài 12 toán tử so sánh
console.log(numberA == numberB); //So sánh không quan tâm kiểu dữ liệu
console.log(numberA === numberC); //So sánh cả giá trị và kiểu đữ liệu
//Bài 13 các hàm toán học
let soA = 22;
let soB = Math.sqrt(soA); //Căn bậc hai
console.log("Căn bậc hai của %s là %s", soA, soB);
let soC = 10;
let ketQua = Math.pow(soA, soC); //Số mũ
console.log("%s mũ %s là: %s", soA, soC, ketQua);
let soD = -10;
let soE = Math.abs(soD); //Trị tuyệt đối
console.log("Trị tuyệt đối của %s là: %s", soD, soE);
let soF = 1.5;
let soH = Math.ceil(soF); // Làm tròn lên
let soG = Math.floor(soF); //Làm tròn xuống
console.log("Làm tròn lên %s, làm tròn xuống %s", soH, soG);
let soI = Math.round(soF); //Làm tròn số VD: từ o,5 lên 1
console.log("Làm tròn số %s lên %s", soF, soI);
let h = Math.max(1, 2, 3, 4, 5, 6, 7, 100); //hàm tìm MAX có thê tìm MIN nếu thay bằng lệnh .min
console.log(h);
//bài 15 hàm random
let randomValue = Math.random(); //random ra số trong khoảng từ 0 đến 1
console.log("Số ngẫu nhiên từ 0 đến sát 1 là : %s", randomValue);
let randomValue2 = parseFloat(Math.random() * 10); // có thể ép kiểu để lấy phần nguyên
console.log(
  "Số ngẫu nhiên lớn hơn 1 nhưng mà nhỏ hơn 10 là : %s",
  randomValue2
);
//Bài 16 if/elseif/else
if (randomValue2 >= 5.0) {
  console.log("Bạn đã đỗ");
} else {
  console.log("Bạn đã tạch");
}
//Bài 17 Toán tử 3 ngôi
let numberD = 10;
let message = numberD >= 0 ? "Số dương" : "Số âm"; // bthuc1 ? bthuc2 : bthuc3;
console.log(message);
// biểu thức 1 đúng thì xét biểu thức 2 còn nếu sai thì xét biểu thức 3 rồi chuyền vào biến muốn gán.

//Bài 17 kiểu Truthy và Falsy values
//Ép ngược kiểu từ "số" sang "chuỗi"
let numberE = 123;
console.log(typeof numberE);
let numberF = String(numberE);
console.log(typeof numberF);
//Bài 19 Swith case js
let numberG = parseFloat(
  prompt("Nhập một kí tự bát kì để kiểm tra có phải số không: ")
);
switch (numberG % 2) {
  case 0:
    cosnsole.log("Số chẵn");
    break;
  case 1:
    console.log("Số lẻ");
    break;
  default:
    console.log("Không phải số");
}
//Biến thể switch case
let month = parseInt(prompt("Nhập vào một tháng từ 1=>12 : "));
switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    console.log("Tháng có 31 ngày");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    console.log("Tháng có 30 ngày");
    break;
  case 2:
    console.log("Tháng có 28 hoặc 29 ngày");
    break;
  default:
    console.log("Tháng không tồn tại");
}
//Bài 25.1 funcion Hàm
//Bước 1: Khai báo hàm
function xinChao() {
  console.log("Xin chào Nguyễn Quang Huy");
}
//Gọi hàm
xinChao();
//function với tham số (paramentor)
let inputName = prompt("Nhập Tên của bạn vào hàm: ");
function xinChao2(name) {
  console.log("Xin chào %s: ", name);
}
xinChao2(inputName);
xinChao2("HiHiHi");
//Tinh tổng bằng hàm
function tinhTong(soA, soC) {
  let ketQua1 = soA + soC;
  return ketQua1;
}
console.log(tinhTong(12, 3));
// Lưu ý: Nếu thân Hàm không có return thì giá trị sẽ trả về undefined
// Gs giá trị sẵn để tránh NaN nếu chỉ nhập 1 số
function tinhTong2(soA = 0, soC = 0) {
  let ketQua2 = soA + soC;
  return ketQua2;
}
console.log(tinhTong2(12)); // Ví dụ nhập thiếu 1 số thì kêt quả trả về vẫn là 1 số là 12+0= 12
