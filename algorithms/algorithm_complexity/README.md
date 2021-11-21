# Algorithm Complexity

## introduction

> *Algorithmic complexity* is a measure of how long an algorithm would take to complete given an input of size n. If an algorithm has to scale, it should compute the result within a finite and practical time bound even for large values of n. For this reason, complexity is calculated asymptotically as n approaches infinity. While complexity is usually in terms of time, sometimes complexity is also analyzed in terms of space, which translates to the algorithm's memory requirements.


- https://www.youtube.com/watch?v=O5LiA5ireA4
- https://www.youtube.com/watch?v=JBm5OXbReQE
- https://devopedia.org/algorithmic-complexity
- https://cses.fi/book/book.pdf
- https://javarevisited.blogspot.com/2017/02/5-websites-for-practicing-data-structure-algorithms-for-coding-interviews.html

## Big O notation

- https://www.youtube.com/watch?v=MyAiCtuhiqQ
- https://www.youtube.com/watch?v=HEISXs0wYlM
- https://stackabuse.com/big-o-notation-and-algorithm-analysis-with-python-examples/
- https://developerinsider.co/big-o-notation-explained-with-examples/

![](https://devopedia.org/images/article/17/4996.1513922020.jpg)
![](https://i.ytimg.com/vi/47GRtdHOKMg/maxresdefault.jpg)

**Simplification**

=> **O(n + n^2) = O(n) + O(n^2) = O(n^2)**

=> **O(n + log n) = O(n) + O(log n) = O(n)**

=> **O(5 * 2^n + n^100) = O(5 * 2^n) + O(n^100) = O(2^n)**

### O(1) - Constant

```python
message = input()                   # O(1)
x = 5                               # O(1)
if message == 'Hi':                 # O(1)
	print('Hi!, How are you?')  # O(1)
```

=> **O(1) + O(1) + O(1) + O(1) = O(1)**

### O(log n) - Logarithmic 

- https://stackoverflow.com/questions/2307283/what-does-olog-n-mean-exactly#:~:text=Logarithmic%20running%20time%20(%20O(log,an%20O(log%20n)%20time

### O(n) - Linear

- https://dzone.com/articles/learning-big-o-notation-with-on-complexity

```python 
def multiply(arr):
	answer = 1              # O(1)
	for item in arr:        # O(n)
		answer *= item  # O(1)
	return answer		# O(1)
```

=> **O(1) + O(n) + O(1) + O(1) = O(n)**


### O(n log n) - Linearithmic

- https://www.educative.io/edpresso/nlogn-sorting-algorithms
- https://stackoverflow.com/questions/1592649/examples-of-algorithms-which-has-o1-on-log-n-and-olog-n-complexities

### O(n^2)  - Quadratic and O(n^k) - Polynomial

- https://adrianmejia.com/most-popular-algorithms-time-complexity-every-programmer-should-know-free-online-tutorial-course/

```python
def multiply_matrix_elements(arr):
	answer = 1                             # O(1)
	for i in range(len(arr)):              # O(n)
		for j in range(len(arr))       # O(n^2)
			answer *= arr[i][j]    # O(1)
	return answer                          # O(1)
```

=> **O(1) + O(n) + O(n^2) + O(1) + O(1) = O(n^2)**

### O(2^n) and O(k^n) - Exponential

- https://adrianmejia.com/most-popular-algorithms-time-complexity-every-programmer-should-know-free-online-tutorial-course/#O-2-n-Exponential-time

### O(n!) - Factorial

- https://adrianmejia.com/most-popular-algorithms-time-complexity-every-programmer-should-know-free-online-tutorial-course/#O-n-Factorial-time
- https://stackoverflow.com/questions/3953244/example-of-on
