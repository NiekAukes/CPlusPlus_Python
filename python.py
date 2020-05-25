# python
import time
while(1): 
    begin = time.time()
    for i in range(10000000):
        (i+i) / (i * i + 1) - i
    end = time.time()
    print(end-begin)
