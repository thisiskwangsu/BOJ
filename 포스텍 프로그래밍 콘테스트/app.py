
result = []


def change():  # 자리수 바꾸는 함수
    num = list(map(str, input()))  # 12345 입력 -> [1,2,3,4,5]
    for i in range(len(num)-1):  # num 자리수보다 한개 적게 0 1 2 3 4 총 5번
        num = num.insert(i, num[i+1])
    print(num)


change()
