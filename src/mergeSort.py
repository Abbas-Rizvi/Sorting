def merge(left, right):
    sorted = []

    while (len(left) != 0 and len(right) != 0):
        if (left[0] < right[0]):
            sorted.append(left[0])
            left.pop(0)
        else:
            sorted.append(right[0])
            right.pop(0)
            inv = inv + len(left)
    
    while (len(left) != 0):
        sorted.append(left[0])
        left.pop(0)

    while (len(right) != 0):
        sorted.append(right[0])
        right.pop(0)

    for i in range(len(sorted)):
        arr[i] = sorted[i]
    
    return sorted


def mergeSort(arr):
    inv = 0
    if len(arr) > 1:  # base case
        # divide array in half and merge sort recursively
        mid = len(arr) // 2
        left = mergeSort(arr[:mid])
        right = mergeSort(arr[mid:])

        return merge(left, right)

    return arr

arr = [2,1,3,1,2] 
print(arr)
mergeSort(arr)
print(arr)
