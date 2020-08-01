def binary(A,l,r,t):
    mid = l + (r-l)//2

    if t > A[mid]:
        return binary(A,mid,l,t)

    elif t < A[mid]:
        return binary(a,f,mid,t)
    
    elif t == A[mid]:
        return mid+1
    else:
        return -1

A =  list(map(int,input().split()))
B = int(input("ENTER THE ELEMENT TO FIND : "))

A = sorted(A)
print(A)

print(binary(A,0,len(A)-1,B))
