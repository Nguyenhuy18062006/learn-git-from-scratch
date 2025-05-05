let so1 = "";
let so2 = "";
let toanTu = "";
let dangNhapSoThu2 = false;
function tinhTong(so1 = 0, so2 = 0) {
  let Tong = so1 + so2;
  return Tong;
}
function tinhHieu(so1 = 0, so2 = 0) {
  let Hieu = so1 - so2;
  return Hieu;
}
function tinhTich(so1 = 0, so2 = 0) {
  let Tich = so1 * so2;
  return Tich;
}
function tinhThuong(so1 = 0, so2 = 0) {
  let Thuong = so1 / so2;
  if (so2 == 0) {
    return;
  }
  return Thuong;
}
function mayTinh(tinhToan) {
  const input = document.querySelector("input");
  if (!isNaN(tinhToan) || tinhToan === ".") {
    if (!dangNhapSoThu2) {
      so1 += tinhToan;
      input.value = so1;
    } else {
      so2 += tinhToan;
      input.value = so2;
    }
  } else if (["+", "-", "*", "/"].includes(tinhToan)) {
    toanTu = tinhToan;
    dangNhapSoThu2 = true;
  } else if (tinhToan === "=") {
    let ketQua = 0;
    let a = parseFloat(so1);
    let b = parseFloat(so2);
    switch (toanTu) {
      case "+":
        ketQua = tinhTong(a, b);
        break;
      case "-":
        ketQua = tinhHieu(a, b);
        break;
      case "*":
        ketQua = tinhTich(a, b);
        break;
      case "/":
        ketQua = tinhThuong(a, b);
    }
    input.value = ketQua;
    so1 = ketQua.toString();
    so2 = "";
    dangNhapSoThu2 = false;
  } else if (tinhToan === "AC") {
    so1 = "";
    so2 = "";
    toanTu = "";
    dangNhapSoThu2 = false;
    input.value = "";
  } else if (tinhToan === "C") {
    if (!dangNhapSoThu2) {
      so1 = so1.slice(0, -1);
      input.value = so1;
    } else {
      so2 = so2.slice(0, -1);
      input.value = so2;
    }
  }
}
