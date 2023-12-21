# 42-Libft

![42-Libft](https://socialify.git.ci/julienhouyet/42-Libft/image?font=Inter&logo=https%3A%2F%2Fgithub.com%2Fayogun%2F42-project-badges%2Fraw%2Fmain%2Fbadges%2Flibftm.png&name=1&owner=1&pattern=Circuit%20Board&theme=Auto)

# Introduction

The aim of this project is to code a C library containing the usual functions that I could use in all my other 42 projects.

At [42 School](https://github.com/42School), almost every project must be written in accordance to the [Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf), the school's coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.

## :zap: Usage

To use this library, import the "include/libft.h" header into your files after compiling the library.

```c
#include "include/libft.h"
```

###  :electric_plug: Installation

To install the project, clone this repository :

```shell
$ git@github.com:julienhouyet/42-Libft.git
```

###  :package: Commands

To compile the library, run :

```shell
$ make
```

To re-compile the library  :

```shell
$ make re
```

To wipes all object files :

```shell
$ make clean
```

To delete the library and all object files

```shell
$ make fclean
```

##  :page_facing_up: Functions in the library
 
✅ ft_isalpha
```c
int isalpha( int ch );
```
```
Checks if the given character is an alphabetic character, i.e. either an uppercase letter (ABCDEFGHIJKLMNOPQRSTUVWXYZ), or a lowercase letter (abcdefghijklmnopqrstuvwxyz).
In locales other than "C", an alphabetic character is a character for which isupper() or islower() returns true or any other character considered alphabetic by the locale. In any case, iscntrl(), isdigit(), ispunct() and isspace() will return false for this character.
The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.
```

✅ ft_isdigit
```c
int isdigit( int ch );
```
```
Checks if the given character is a numeric character (0123456789).
The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.
```

✅ ft_isalnum
```c
int isalnum( int ch );
```
```
Checks if the given character is an alphanumeric character as classified by the current C locale. In the default locale, the following characters are alphanumeric:
digits (0123456789)
uppercase letters (ABCDEFGHIJKLMNOPQRSTUVWXYZ)
lowercase letters (abcdefghijklmnopqrstuvwxyz)
The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.
```
 
✅ ft_isprint
```c
int isprint( int ch );
```
```
Checks if the given character can be printed, i.e. it is either a number (0123456789), an uppercase letter (ABCDEFGHIJKLMNOPQRSTUVWXYZ), a lowercase letter (abcdefghijklmnopqrstuvwxyz), a punctuation character(!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~), or space, or any character classified as printable by the current C locale.
The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.
```
 
✅ ft_strlen
```c
size_t strlen( const char *str );
```
```
Returns the length of the given null-terminated byte string, that is, the number of characters in a character array whose first element is pointed to by str up to and not including the first null character.
The behavior is undefined if str is not a pointer to a null-terminated byte string.
```
 
✅ ft_memset

```c
void *memset( void *dest, int ch, size_t count );
```
```
Copies the value (unsigned char)ch into each of the first count characters of the object pointed to by dest.
The behavior is undefined if access occurs beyond the end of the dest array. The behavior is undefined if dest is a null pointer.
```
 
✅ ft_bzero

```c
void bzero(void s, size_t n);
```
```
The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
```
 
✅ ft_memcpy

```c
void *memcpy( void *dest, const void *src, size_t count );
```
```
Copies count characters from the object pointed to by src to the object pointed to by dest. Both objects are interpreted as arrays of unsigned char.
The behavior is undefined if access occurs beyond the end of the dest array. If the objects overlap (which is a violation of the restrict contract)(since C99), the behavior is undefined. The behavior is undefined if either dest or src is an invalid or null pointer.
```
 
✅ ft_memmove

```c
void *memmove( void* dest, const void* src, size_t count );
```
```
Copies count characters from the object pointed to by src to the object pointed to by dest. Both objects are interpreted as arrays of unsigned char. The objects may overlap: copying takes place as if the characters were copied to a temporary character array and then the characters were copied from the array to dest.
The behavior is undefined if access occurs beyond the end of the dest array. The behavior is undefined if either dest or src is an invalid or null pointer.
```
 
✅ ft_strlcpy & ft_strlcat

```c
size_t strlcpy(char *dst, const char *src, size_t size);

size_t strlcat(char *dst, const char *src, size_t size);
```
```
The strlcpy() and strlcat() functions copy and concatenate NUL-terminated strings respectively.

The strlcpy() function copies up to size - 1 bytes from the NUL-terminated string src to dst, NUL-terminating the result.

The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
```
 
✅ ft_toupper

```c
int toupper( int ch );
```
```
Converts the given character to uppercase according to the character conversion rules defined by the currently installed C locale.
In the default "C" locale, the following lowercase letters abcdefghijklmnopqrstuvwxyz are replaced with respective uppercase letters ABCDEFGHIJKLMNOPQRSTUVWXYZ.
```
 
✅ ft_tolower

```c
int tolower( int ch );
```
```
Converts the given character to lowercase according to the character conversion rules defined by the currently installed C locale.
In the default "C" locale, the following uppercase letters ABCDEFGHIJKLMNOPQRSTUVWXYZ are replaced with respective lowercase letters abcdefghijklmnopqrstuvwxyz.
```
 
✅ ft_strchr

```c
char *strchr( const char *str, int ch );
```
```
Finds the first occurrence of ch (after conversion to char as if by (char)ch) in the null-terminated byte string pointed to by str (each character interpreted as unsigned char). The terminating null character is considered to be a part of the string and can be found when searching for '\0'.
```
 
✅ ft_strrchr

```c
char *strrchr( const char *str, int ch );
```
```
Finds the last occurrence of ch (after conversion to char as if by (char)ch) in the null-terminated byte string pointed to by str (each character interpreted as unsigned char). The terminating null character is considered to be a part of the string and can be found if searching for '\0'.
```
 
✅ ft_strncmp

```c
int strncmp( const char* lhs, const char* rhs, size_t count );
```
```
Compares at most count characters of two possibly null-terminated arrays. The comparison is done lexicographically. Characters following the null character are not compared.
The sign of the result is the sign of the difference between the values of the first pair of characters (both interpreted as unsigned char) that differ in the arrays being compared.
The behavior is undefined when access occurs past the end of either array lhs or rhs. The behavior is undefined when either lhs or rhs is the null pointer.
```
 
✅ ft_memchr

```c
void *memchr( const void *ptr, int ch, size_t count );
```
```
Finds the first occurrence of (unsigned char)ch in the initial count bytes (each interpreted as unsigned char) of the object pointed to by ptr.
```
 
✅ ft_memcmp

```c
int memcmp( const void* lhs, const void* rhs, size_t count );
```
```
Compares the first count bytes of the objects pointed to by lhs and rhs. The comparison is done lexicographically.
The sign of the result is the sign of the difference between the values of the first pair of bytes (both interpreted as unsigned char) that differ in the objects being compared.
The behavior is undefined if access occurs beyond the end of either object pointed to by lhs and rhs. The behavior is undefined if either lhs or rhs is a null pointer.
```
 
✅ ft_strnstr

```c
char *strstr(const char *big, const char *little);
```
```
The  strstr()  function locates the first occurrence of the null-terminated string little in the null-terminated string big.
```
 
✅ ft_atoi

```c
int atoi( const char *str );
```
```
Interprets an integer value in a byte string pointed to by str. The implied radix is always 10.
Discards any whitespace characters until the first non-whitespace character is found, then takes as many characters as possible to form a valid integer number representation and converts them to an integer value. The valid integer value consists of the following parts:
(optional) plus or minus sign numeric digits
If the value of the result cannot be represented, i.e. the converted value falls out of range of the corresponding return type, the behavior is undefined.
```
 
✅ ft_calloc

```c
void* calloc( size_t num, size_t size );
```
```
Allocates memory for an array of num objects of size and initializes all bytes in the allocated storage to zero.
If allocation succeeds, returns a pointer to the lowest (first) byte in the allocated memory block that is suitably aligned for any object type with fundamental alignment.
If size is zero, the behavior is implementation defined (null pointer may be returned, or some non-null pointer may be returned that may not be used to access storage).
```
 
✅ ft_strdup

```c
char *strdup( const char *src );
```
```
Returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by src. The space for the new string is obtained as if the malloc was invoked. The returned pointer must be passed to free to avoid a memory leak.
If an error occurs, a null pointer is returned and errno might be set.
```
 
✅ ft_substr

```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```
```
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
```
 
✅ ft_strjoin

```c
char *ft_strjoin(char const *s1, char const *s2);
```
```
Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
```
 
✅ ft_strtrim

```c
char *ft_strtrim(char const *s1, char const *set);
```
```
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string
```
 
✅ ft_split

```c
char **ft_split(char const *s, char c);
```
```
Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. 
The array must end with a NULL pointer.
```
 
✅ ft_itoa

```c
char *ft_itoa(int n);
```
```
Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
Negative numbers must be handled.
```

✅ ft_strmapi

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
```
Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
```

✅ ft_striteri

```c
void ft_striteri(char *s, void (*f)(unsigned int, char*));
```
```
Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. 
Each character is passed by address to ’f’ to be modified if necessary.
```

✅ ft_putchar_fd

```c
void ft_putchar_fd(char c, int fd);
```
```
Outputs the character ’c’ to the given file descriptor.
```

✅ ft_putstr_fd

```c
void ft_putstr_fd(char *s, int fd);
```
```
Outputs the string ’s’ to the given file descriptor.
```

✅ ft_putendl_fd

```c
void ft_putendl_fd(char *s, int fd);
```
```
Outputs the string ’s’ to the given file descriptor followed by a newline.
```

✅ ft_putnbr_fd

```c
void ft_putnbr_fd(int n, int fd);
```
```
Outputs the integer ’n’ to the given file descriptor.
```



✅ ft_lstnew

```c
t_list *ft_lstnew(void *content);
```
```
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with the value of the parameter ’content’.  The variable ’next’ is initialized to NULL.
```

✅ ft_lstadd_front

```c
void ft_lstadd_front(t_list **lst, t_list *new);
```
```
Adds the node ’new’ at the beginning of the list.
```

✅ ft_lstsize

```c
int ft_lstsize(t_list *lst);
```
```
Counts the number of nodes in a list.
```

✅ ft_lstlast

```c
t_list *ft_lstlast(t_list *lst);
```
```
Returns the last node of the list.
```

✅ ft_lstadd_back

```c
void ft_lstadd_back(t_list **lst, t_list *new);
```
```
Adds the node ’new’ at the end of the list.
```

✅ ft_lstdelone

```c
void ft_lstdelone(t_list *lst, void (*del)(void*));
```
```
Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node.  The memory of ’next’ must not be freed.
```

✅ ft_lstclear

```c
void ft_lstclear(t_list **lst, void (*del)(void*));
```
```
Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
```

✅ ft_lstiter

```c
void ft_lstiter(t_list *lst, void (*f)(void *));
```
```
Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
```

✅ ft_lstmap

```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
```
Iterates the list ’lst’ and applies the function ’f’ on the content of each node.  Creates a new list resulting of the successive applications of the function ’f’.  The ’del’ function is used to delete the content of a node if needed.
```

##  :lock: License

GNU GENERAL PUBLIC LICENSE
Version 3