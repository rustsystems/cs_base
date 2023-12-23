package main

import "fmt"

func fibo(n int) []int {
	memo := make([]int, n+1)
	return fiboHelper(n, memo)
}

func fiboHelper(n int, memo []int) int {
	if n <= 1 {
		return n
	}

	if memo[n] != 0 {
		return memo[n]
		// memo[n] = fiboHelper(n-1, memo) + fiboHelper(n-2, memo)
	}

	fib := fiboHelper(n-1, memo) + fiboHelper(n-2, memo)
	memo[n] = fib
	return fib
}

func main() {
	fib_mem := fibo(10)
	for f := range fib_mem {
		fmt.Printf("%d ", f)
	}
}