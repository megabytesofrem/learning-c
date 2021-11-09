# K&R C

## printf
`printf` takes format specifiers which can be used to specify how we
want the output to be displayed.

- %d: format as an integer
- %f: format as a float
- %x: format as a pointer

## Pass By Value
In C all function arguments are passed by value, not by reference.

The called function is given the values of its arguments in temporary
variables, rather than the original values.

- we can't modify the original values, only the local copies
- if we modify a local copy, it has no effect on the passed in value

```c
int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p - p * base;
    return p;
}
```

If we want to, we can allow a function to modify a variable passed to it by
giving it the address of the variable (a pointer to the variable).

However, *arrays* are passed by *reference* not *value*, meaning we can
modify them and access any element of the array.
