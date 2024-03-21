#202311401 박성서
#Chapter 1

list = []
input_str = input("입력: ")
print(f"입력한 문자열: {input_str}")
print("역순 출력: ", end="")
for i in range(len(input_str) - 1, -1, -1):
    print(input_str[i], end="")
