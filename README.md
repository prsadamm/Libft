# libft

*Ce projet a été réalisé dans le cadre du cursus de l'école 42.*

## Description

**libft** est la première bibliothèque C personnelle du cursus 42. Elle recode des fonctions standard de la libc, ainsi que des fonctions utilitaires supplémentaires, qui serviront de base pour les projets suivants.

L'objectif est de comprendre en profondeur le fonctionnement de ces fonctions, la gestion de la mémoire et les pointeurs en C.

## Contenu

### Partie 1 – Fonctions libc
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`

### Partie 2 – Fonctions additionnelles
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus – Listes chaînées
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Compilation

```bash
make        # compile la bibliothèque libft.a
make bonus  # inclut les fonctions bonus
make clean  # supprime les fichiers objets
make fclean # supprime les objets et libft.a
make re     # recompile entièrement
```

## Utilisation

Inclure le header et lier la bibliothèque lors de la compilation :

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o programme
```

## Normes

- Respect de la **Norme** de 42
- Compilation avec `-Wall -Wextra -Werror`
- Aucune fuite mémoire

## Auteur

@prsadamm

