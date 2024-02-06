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

- First part recode a set of libc function:
  • isalpha
  • isdigit
  • isalnum
  • isascii
  • isprint
  • strlen
  • memset
  • bzero
  • memcpy
  • memmove
  • strlcpy
  • strlcat
  • toupper
  • tolower
  • strchr
  • strrchr
  • strncmp
  • memchr
  • memcmp
  • strnstr
  • atoi
  • calloc
  • strdup

and also :

  • char *ft_substr(char const *s, unsigned int start, size_t len);
  • char *ft_strjoin(char const *s1, char const *s2);
  • char *ft_strtrim(char const *s1, char const *set);
  • char **ft_split(char const *s, char c);
  • char *ft_itoa(int n);
  • char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
  • void ft_striteri(char *s, void (*f)(unsigned int, char*));
  • void ft_putchar_fd(char c, int fd);
  • void ft_putstr_fd(char *s, int fd);
  • void ft_putendl_fd(char *s, int fd);
  • void ft_putnbr_fd(int n, int fd);
  
  
- The second part recode a collection of function that operate with link list:
  • t_list *ft_lstnew(void *content);
  • void ft_lstadd_front(t_list **lst, t_list *new);
  • int ft_lstsize(t_list *lst);
  • t_list *ft_lstlast(t_list *lst);
  • void ft_lstadd_back(t_list **lst, t_list *new);
  • void ft_lstdelone(t_list *lst, void (*del)(void*));
  • void ft_lstclear(t_list **lst, void (*del)(void*));
  • void ft_lstiter(t_list *lst, void (*f)(void *));
  • t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

### Screenshot

![Result](./screenshot/Libft.jpg)
