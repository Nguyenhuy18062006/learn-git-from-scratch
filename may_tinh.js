function caculate(tinhToan) {
  let so1 = parseFloat(document.getElementById("so1").value);
  let so2 = parseFloat(document.getElementById("so2").value);
  let result = 0;
  if (isNaN(so1) || isNaN(so2)) {
    alert("Vui lòng nhập số hợp lệ!");
    return;
  }
  switch (tinhToan) {
    case "+":
      result = so1 + so2;
      break;
    case "-":
      result = so1 - so2;
      break;
    case "*":
      result = so1 * so2;
      break;
    case "/":
      if (so2 == 0) {
        alert("Không thể chia");
      }
      result = so1 / so2;
      break;
    default:
      result = 0;
  }
  document.getElementById("result").innerText = result;
}
