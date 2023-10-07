def is_Prime(n):
	if n % 2 == 0:
		return False
	for i in xrange(3, int(n ** 0.5)+1, 2):
		if n % i == 0:
			return False
	return True
  
import itertools
def PrimeChecker(num): 
  temp = str(num)
  for num in itertools.permutations(temp, len(temp)):
    if is_Prime(int("".join(num))):
      return 1
  return 0  
