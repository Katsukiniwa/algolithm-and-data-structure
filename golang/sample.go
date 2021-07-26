package main

import (
	"fmt"
)

func main() {

	var a, b int

	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)

	var result int

	result = a * b

	if result%2 == 0 {
		fmt.Printf("Even\n")
	} else {
		fmt.Printf("Odd\n")
	}
}
