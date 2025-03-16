from python_nhat_anh import *
def main():
    s = input("Nhập một xâu ký tự: ")
    print("Các ký tự trong xâu:")
    print_characters(s)
    dao_nguoc(s)
    dem(s)
if __name__ == "__main__":
    main()