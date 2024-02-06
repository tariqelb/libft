# Libft a library that content a set of C standard functions reimplemented and othres basic functions to use in 42 cursus projects.

This is the first project in 42 cursus, the aim is to implement a  collecion of functions that i will be used in other project.  

## Table of contents

- [Libft - the first 42 cursus project](#42 cursus)
  - [Table of contents](#table-of-contents)
  - [Overview](#overview)
  - [The project](#the-project)
  - [Screenshot](#screenshot)
  


## Overview

Reimpliment a set of C function that interpret string , number, character, memory, address and link list , the only C standard functions allowed is write, malloc and free .

### The project

- First part recode a set of libc function: <br>
  • isalpha <br>
  • isdigit <br>
  • isalnum <br>
  • isascii <br>
  • isprint <br>
  • strlen <br>
  • memset <br>
  • bzero <br>
  • memcpy <br>
  • memmove <br>
  • strlcpy <br>
  • strlcat <br>
  • toupper <br>
  • tolower <br>
  • strchr <br>
  • strrchr <br>
  • strncmp <br>
  • memchr <br>
  • memcmp <br>
  • strnstr <br>
  • atoi <br>
  • calloc <br>
  • strdup <br>

- and also :<br>

  • char *ft_substr(char const *s, unsigned int start, size_t len);<br>
  • char *ft_strjoin(char const *s1, char const *s2);<br>
  • char *ft_strtrim(char const *s1, char const *set);<br>
  • char **ft_split(char const *s, char c);<br>
  • char *ft_itoa(int n);<br>
  • char *ft_strmapi(char const *s, char (*f)(unsigned int, char));<br>
  • void ft_striteri(char *s, void (*f)(unsigned int, char*));<br>
  • void ft_putchar_fd(char c, int fd);<br>
  • void ft_putstr_fd(char *s, int fd);<br>
  • void ft_putendl_fd(char *s, int fd);<br>
  • void ft_putnbr_fd(int n, int fd);<br>
  
  
- The second part recode a collection of function that operate with link list:<br>
  • t_list *ft_lstnew(void *content);<br>
  • void ft_lstadd_front(t_list **lst, t_list *new);<br>
  • int ft_lstsize(t_list *lst);<br>
  • t_list *ft_lstlast(t_list *lst);<br>
  • void ft_lstadd_back(t_list **lst, t_list *new);<br>
  • void ft_lstdelone(t_list *lst, void (*del)(void*));<br>
  • void ft_lstclear(t_list **lst, void (*del)(void*));<br>
  • void ft_lstiter(t_list *lst, void (*f)(void *));<br>
  • t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));<br>

### Screenshot

![Result](./screenshot/Libft.jpg)
