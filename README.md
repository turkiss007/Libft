*This project has been created as part of the 42 curriculum by mdorado.*

## Description

Libft is a project focused on creating my own C library by implementing
a collection of functions that can be reused in future C projects.

Throughout the 42 curriculum, the use of certain standard library functions and external libraries is restricted. Therefore, it is important to understand how
these functions work and learn how to implement them from scratch.

The main objective of this project is to gain a deeper understanding of
the C programming language by recreating standard library functions
and developing additional utility functions.

This project has also helped me improve my understanding of memory
management, pointers, strings, and linked lists, which are essential
concepts for programming in C.

## Library Overview

Libft is a custom C library that recreates several standard C library
functions and introduces additional utility functions. It also includes
functions for working with linked lists.

|Function|Description|Return|
|---|---|---|
|**ft_isalpha**|Checks whether a character is alphabetic.|Returns 1 if the character is alphabetic, or 0 otherwise|
|**ft_isdigit**|Checks whether a character is a digit.|Returns 1 if the character is a digit, or 0 otherwise|
|**ft_isalnum**|Checks whether a character is alphanumeric.|Returns 1 if the character is alphanumeric, or 0 otherwise|
|**ft_isascii**|Checks whether a character belongs to the ASCII range (0–127).|Returns 1 if the character falls within this range, or 0 otherwise.|
|**ft_isprint**|Checks whether a character is printable (ASCII values 32–126).|Returns 1 if the character is printable, or 0 otherwise.|
|**ft_strlen**|Calculates the length of a string, excluding the terminating null character ('\0').|Returns the length of the string as a size_t value.|
|**ft_memset**|Fills the first n bytes of a memory block with the specified value.|Returns a pointer to the memory block s.|
|**ft_bzero**|Sets the first n bytes of a memory block to zero.|Does not return a value (void).|
|**ft_memcpy**|Copies n bytes from the source memory block src to the destination memory block dest. The memory regions must not overlap.|Returns a pointer to the destination memory block dest, or NULL if both dest and src are NULL.|
|**ft_memmove**|Copies n bytes from the source memory block src to the destination memory block dest, handling overlapping memory regions safely.|Returns a pointer to the destination memory block dest.|
|**ft_strlcpy**|Copies a string from src to dst, ensuring that the destination string is null-terminated when size is greater than zero. It copies at most size - 1 characters.|Returns the length of the source string src.|
|**ft_strlcat**|Appends the source string src to the destination string dst, adding at most size - ft_strlen(dst) - 1 characters and ensuring the result is null-terminated when there is enough space.|Returns the initial length of dst plus the length of src, or size + ft_strlen(src) if size is less than or equal to the initial length of dst.|
|**ft_toupper**|Converts a lowercase letter to uppercase. If the character is not a lowercase letter, it remains unchanged.|Returns the uppercase equivalent of c if it is a lowercase letter, or the original value otherwise.|
|**ft_tolower**|Converts an uppercase letter to lowercase. If the character is not an uppercase letter, it remains unchanged.|Returns the lowercase equivalent of c if it is an uppercase letter, or the original value otherwise.|
|**ft_strchr**|Searches for the first occurrence of the character c in the string s, including the terminating null character ('\0').|Returns a pointer to the first occurrence of c in s, or NULL if the character is not found.|
|**ft_strrchr**|Searches for the last occurrence of the character c in the string s, including the terminating null character ('\0').|Returns a pointer to the last occurrence of c in s, or NULL if the character is not found.|
|**ft_strncmp**|Compares the first n characters of two strings, s1 and s2, treating each character as an unsigned char.|Returns the difference between the first pair of characters that differ, or 0 if the strings are equal up to n characters or a null terminator is reached|
|**ft_memchr**|Searches for the first occurrence of the character c in the first n bytes of the memory block s.|Returns a pointer to the first occurrence of c, or NULL if the character is not found within the first n bytes.|
|**ft_memcmp**|Compares the first n bytes of two memory blocks, s1 and s2.|Returns the difference between the first pair of bytes that differ, or 0 if all n bytes are equal.|
|**ft_strnstr**|Searches for the first occurrence of the string little within the first len characters of the string big. If little is an empty string, it returns big.|Returns a pointer to the first occurrence of little in big, or NULL if the substring is not found within the specified length.|
|**ft_atoi**|Converts the initial part of a string into an integer. It skips leading whitespace characters, handles an optional sign (+ or -), and reads digits until a non-digit character is encountered.|Returns the resulting integer, including its sign. Returns 0 if no digits are found after the optional whitespace and sign.
|**ft_calloc**|Allocates memory for an array of nmemb elements, each of size bytes, and initializes all allocated bytes to zero. It checks for integer overflow before allocating memory.|Returns a pointer to the allocated memory, or NULL if the allocation fails.|
|**ft_strdup**|Allocates memory for a copy of the string s and copies its contents, including the terminating null character ('\0').|Returns a pointer to the duplicated string, or NULL if memory allocation fails.|
|**ft_substr**|Creates a substring from the string s, starting at index start and copying up to len characters. If the requested length exceeds the remaining characters in s, it copies only the available characters.|Returns a pointer to the newly allocated substring, or NULL if memory allocation fails. Returns an empty string if start is greater than or equal to the length of s.|
|**ft_strjoin**|Allocates memory for a new string containing the concatenation of s1 and s2. It copies the contents of s1 followed by s2, and adds a terminating null character ('\0').|Returns a pointer to the newly allocated string, or NULL if memory allocation fails.|
|**ft_strtrim**|Creates a new string by removing characters from the beginning and end of s1 that are present in set. Characters that do not belong to set mark the boundaries of the resulting string.|Returns a pointer to the newly allocated trimmed string, or NULL if memory allocation fails.|
|**ft_split**|Splits the string s into an array of strings using the character c as a delimiter. Consecutive delimiters are treated as a single separator, and empty strings are not included in the resulting array. The array ends with a NULL pointer.|Returns a pointer to the array of strings, or NULL if memory allocation fails.|
|**ft_itoa**|Converts an integer into a string representing its decimal value. It handles negative numbers and allocates enough memory to store the digits, an optional minus sign, and the terminating null character ('\0').|Returns a pointer to the newly allocated string, or NULL if memory allocation fails.|
|**ft_strmapi**|Creates a new string by applying the function f to each character of the string s, passing its index and character as arguments.|Returns a pointer to the newly allocated string, or NULL if memory allocation fails.|
|**ft_striteri**|Applies the function f to each character of the string s, passing its index and a pointer to the character as arguments. The function can modify the original string.|Does not return a value (void).|
|**ft_putchar_fd**|Writes the character c to the specified file descriptor fd.|Does not return a value (void).|
|**ft_putstr_fd**|Writes the string s to the specified file descriptor fd, without adding a newline character.|Does not return a value (void).|
|**ft_putendl_fd**|Writes the string s to the specified file descriptor fd, followed by a newline character ('\n').|Does not return a value (void).|
|**ft_putnbr_fd**|Converts the integer n into a string and writes it to the specified file descriptor fd.|Does not return a value (void).|
|**ft_lstnew**|Creates a new linked list node, initializes its content with content, and sets its next pointer to NULL.|Returns a pointer to the newly created node, or NULL if memory allocation fails.|
|**ft_lstadd_front**|Adds the node new to the beginning of the linked list lst, updating the list's head to point to the new node.|Does not return a value (void).|
|**ft_lstsize**|Counts the number of nodes in the linked list lst by traversing the list until it reaches the end.|Returns the total number of nodes in the list as an unsigned int.|
|**ft_lstlast**|Finds the last node of the linked list lst by traversing the list until it reaches a node whose next pointer is NULL.|Returns a pointer to the last node, or NULL if the list is empty.|
|**ft_lstadd_back**|Adds the node new to the end of the linked list lst. If the list is empty, new becomes the first node. Otherwise, the last node is linked to new.|Does not return a value (void).|
|**ft_lstdelone**|Deletes a single node from a linked list by applying the function del to its content and then freeing the node's memory. It does not free any other nodes in the list.|Does not return a value (void).|
|**ft_lstclear**|Deletes and frees all nodes in the linked list lst, applying the function del to each node's content before freeing the node itself. Sets the list's head to NULL after clearing it.|Does not return a value (void).|
|**ft_lstiter**|Applies the function f to the content of each node in the linked list lst, traversing the list from the first node to the last.|Does not return a value (void).|
|**ft_lstmap**|Creates a new linked list by applying the function f to the content of each node in the original list lst. Each new node stores the transformed content, and the original list remains unchanged. If memory allocation fails, the function del is used to free the transformed content and all nodes created so far.|Returns a pointer to the new linked list, or NULL if memory allocation fails.|

## Instructions

### Downloading the repository
1. Open the repository on GitHub.
2. Click on **Code > Download ZIP**.
3. Once the download is complete, extract the ZIP file.
4. Open a terminal in the extracted project directory.

Alternatively, you can clone the repository using Git:

    git clone <repository-url>
    cd <repository-directory>

### Compiling the library
The project includes a Makefile to simplify compilation.

Run the following commands from the project directory:

- `make` or `make all`: Compiles the source files and creates the
  `libft.a` static library.
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes the object files and the compiled library.
- `make re`: Removes the previously compiled files and recompiles
  the library.

### Using the library

To use Libft in another C project, include the header file
`libft.h` and link the compiled library when compiling your program.

For example:

    cc main.c libft.a

This command assumes that `main.c`, `libft.h`, and `libft.a` are in
the current directory.

You can then run your program using:

    ./a.out

## Resources

The following resources helped me understand the concepts involved
in this project and implement the functions.

### Documentation and learning resources
- [w3schools](https://www.w3schools.com/): A useful resource for
  reviewing programming concepts and learning through examples
  and practice exercises.
- [YouTube - Linked Lists](https://youtu.be/3-u5SRuStuc?si=W1lhNlQ8qpDBAdZ): A video that helped me understand linked lists.
- [YouTube - Linked Lists](https://youtu.be/qk67wS7WYxo?si=39vIsiSiK236vfvw): Another video that helped me understand linked lists.

### Peer learning
I also received help from my peers at 42. Discussing problems and
sharing different approaches helped me understand concepts that
were difficult or new to me.

### Use of Artificial Intelligence
I used AI as a learning tool to better understand the requirements
of the project, clarify programming concepts, and investigate why
some parts of my code did not behave as expected.

Rather than relying on AI to provide complete solutions, I used it
to ask questions, understand the reasoning behind different
implementations, and identify potential problems in my code.

When I struggled with a particular concept, I first tried to solve
the problem myself and, when necessary, asked my peers or used AI
to help me understand it.

This was especially useful when learning about concepts that I had
not encountered in other programming languages, such as linked lists
and some aspects of memory management.
