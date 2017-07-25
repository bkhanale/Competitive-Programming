x, y = map(int, raw_input().strip().split())
count = 0
for i in range(1,x+1):
    a = i*i
    a = a + y
    count += int(a**0.5) -i
print count 
