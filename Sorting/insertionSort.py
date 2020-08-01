def insort(arr):
    
    for i in range(1, len(arr)):

        val = arr[i]
        hole = i

        while hole > 0 and arr[hole-1] > val:
            arr[hole] = arr[hole-1]
            hole = hole-1
        arr[hole] = val
    return arr

def main(arr)
    arr = insort(arr)
    return arr

