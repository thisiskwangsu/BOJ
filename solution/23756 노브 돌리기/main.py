import math
n = int(input())
data = []
for _ in range(n+1):
    data.append(int(input()))

result = []


def knob():
    for i in range(0, n):
        if(abs(data[i+1] - data[i]) > 180):
            a = 360 - abs(data[i+1] - data[i])
        else:
            a = abs(data[i+1] - data[i])
        result.append(a)
    print(sum(result))


knob()