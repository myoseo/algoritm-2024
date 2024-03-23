#202311401 박성서
#Chapter 1

def ar(list) :
  max = list[0]
  min = list[0]
  for i in range(1,len(list)) :
      if max < list[i] :
          max = list[i]
      if min > list[i] :
          min = list[i]
  temp = (min, max)
  return temp

list = [2,1,3,4,6,5]
arr = []
arr = ar(list)
print(arr)