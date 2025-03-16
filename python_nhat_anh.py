def print_characters(s):
    """
    Nhập một xâu ký tự. In ra tất cả các ký tự trong xâu vừa nhập
    """
    for char in s:
        print(char, end=' ')
    print()
def dao_nguoc(s):
    print("Các kí tự đảo ngược trong xâu là:", s[::-1])
    return s[::-1]
def dem(s):
    s1 =input("Nhập một dãy mới: ")
    print(f"Số lần xuất hiện của '{s1}' trong chuỗi là:"  ,s.count(s1))
