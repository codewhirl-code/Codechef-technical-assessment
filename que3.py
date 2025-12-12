t = int(input()) # input for number of testcases

for _ in range(t): 
    n = int(input()) # input for number of trees
    fruits = list(map(int,input().split())) # list containing all types of fruits
    # we will consider a window
    left = 0 # starting point of the window
    count = {} # how many fruits of eacch type are inside the window
    best = 0 # biggest window found so far
    
    for right in range(n): # the right loop is for accessing all the elements of the fruits list
        f = fruits[right]
        count[f] = count.get(f,0) +1#dictionary which tells how many fruits of each type are there
        # if we have 3 types we need to shrink the window as the basket can hold only two types
        while len(count)>2:
            left_f = fruits[left]
            count[left_f] -=1
            if count[left_f] ==0:
                del count[left_f]
            left +=1
            
        best = max(best,right-left+1)
        
    print(best)