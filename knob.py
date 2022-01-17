import math  # 절댓값
n = int(input())  # 몇 번 이동하는가
data = []  # 각도 리스트
for _ in range(n+1):  # 각도 입력받음 ex) 1번 이동하면 두개의 각 필요함
    data.append(int(input()))

result = []


def knob():
    for i in range(0, n):
        if(abs(data[i+1] - data[i]) > 180):  # 차이가 180보다 크면 360에서 뺀다
            a = 360 - abs(data[i+1] - data[i])
        else:
            a = abs(data[i+1] - data[i])
        result.append(a)

    print(sum(result))


knob()
