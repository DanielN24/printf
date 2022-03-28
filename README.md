# 0x11. C - printf

## Write your own printf function
the purpose of this project is to create a function that prints formatted text to the standard output stream.

it can take one or more arguments, where the first argument is a string to be written. This string can contain special formatting codes which are replaced by items from the remainder of the arguments.
For example, an integer can be printed using the "%d" formatting code.

## example

```
_printf("%d", 42);
```

## Type field
The Type field can be any of:
* % - Prints a literal % character (this type doesn't accept any flags, width, precision, length fields).
* d, i - int as a signed integer. %d and %i are synonymous for output.
* c - char (character).
* s - character string stored as an array containing the characters and terminated with a null character

## compilation

```
$ gcc *.c -o [File_name]
```
## authors
* Daniel Novoa
* Jesus Junco
