#selection sorting
N = int(input())
arr = []

for _ in range(N):
    num = int(input())
    arr.append(num)

for i in range(len(arr)): # 0 1 2 3 4
    min_idx = i #가장 작은 원소의 인덱스
    for j in range(i + 1, len(arr)):
        if arr[min_idx] > arr[j]:
            min_idx = j
    arr[i], arr[min_idx] = arr[min_idx], arr[i] #스와프

for k in range(len(arr)):
    print(arr[k])

# N = int(input())
# arr = []

# for _ in range(N):
#     num = int(input())
#     arr.append(num)

# arr.sort()

# for i in range(N):
#     print(arr[i])