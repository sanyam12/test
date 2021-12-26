x = input("enter the sentence ")
size = len(x)
start = 0
end = 0
for i in range(size):
    if(x[i]==' '):
        if(i==size):
            end = i
        else:
            end = i-1
        if(end-start>=3):
            for j in range(start,end+1):
                print(x[j])
        
        start = i+1
    
