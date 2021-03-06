# Using subsets effectively

Assignment: All C control statements can be reproduced using only the `for` loop. Show how.

## Anathomy of a for loop

```c
for (initializer; condition; update) {
	// statements
}
```

## While loop

```c
while (condition) {
	// statements
}
```

Can be written as:

```c
for ( ; condition; ) {
	// statements
}
```

## Do-while Loop

```c
do {
	//statements
	
} while (condition);
```

Can be written as:

```c
for (bool i = true ; (condition) || i; i = false) {
	// statements
}
```

## If

```c
if (condition) {
	// statements
}
```

Can be written as:

```c
for (bool i = true; (condition) && i ; i = false) {
	// statements
}
```

## If-else

```c
if (condition) {
	// statements
} else if (condition2) {
	// other statements 2
} else if (condition3) {
	// other statements 3
	if (nested_if_condition) {
		// nested if statements
	}
} else {
	// else statements
}
```

Can be written as:

```c
bool con = (condition);
for (bool i = true; con && i ; i = false) {
	// statements
}

con = !con && (condition2);
for (bool i = true; con && i ; i = false) {
	// other statements 2
} 

con = !con && (condition3);
for (bool i = true; con && i ; i = false) {
	// other statements 3
	for (bool i = true; nested_if_condition && i ; i = false) {
		// nested if statements
	}
} 

con = !con;
for (bool i = true; con && i ; i = false) {
	// else statements
} 
```

## Nesting

Obviously we can nest these control statements as much as we please, the for loops then will be nested accordingly.

## After thought

If I were to choose a subset of statements I probably would have chosen `while` because of a much simpler structure it's much simpler to implement in assembly than `for`, All other statements can also be reproduced as well.

A `for` loop can be written as:

```c
initializer;
while (condition) {
	// statements
	update;
}
```
