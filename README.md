*This project has been created as part of the 42 curriculum by Itakaah.*

# ft_printf

## Description

ft_printf est une réimplémentation de la fonction `printf()` de la librairie standard C. Le but de ce projet est d'apprendre à utiliser les fonctions variadiques en C et de comprendre comment fonctionne le formatage de chaines de caractères.

La fonction prend en paramètre une chaine de format et un nombre variable d'arguments, puis affiche le résultat formaté sur la sortie standard.

### Conversions supportées

- `%c` : affiche un caractère
- `%s` : affiche une chaine de caractères
- `%p` : affiche un pointeur en hexadécimal
- `%d` : affiche un nombre décimal (base 10)
- `%i` : affiche un entier en base 10
- `%u` : affiche un nombre décimal non signé
- `%x` : affiche un nombre en hexadécimal (minuscules)
- `%X` : affiche un nombre en hexadécimal (majuscules)
- `%%` : affiche un signe pourcentage

## Instructions

### Compilation

Pour compiler la librairie :

```bash
make
```

Cela va créer le fichier `libftprintf.a` à la racine du projet.

### Utilisation

Pour utiliser ft_printf dans ton projet :

1. Inclure le header :
```c
#include "ft_printf.h"
```

2. Compiler avec la librairie :
```bash
cc main.c libftprintf.a
```

### Règles du Makefile

- `make` ou `make all` : compile la librairie
- `make clean` : supprime les fichiers objets
- `make fclean` : supprime les fichiers objets et la librairie
- `make re` : recompile tout

## Algorithme et structure de données

### Architecture du projet

J'ai choisi de séparer le code en plusieurs fichiers pour que ce soit plus clair :

```
ft_printf/
├── ft_printf.c      # fonction principale
├── ft_printf.h      # header avec les prototypes
├── Makefile
└── utils/
    ├── ft_putchar.c         # affiche un char
    ├── ft_putstr.c          # affiche une string
    ├── ft_putnbr.c          # affiche un int
    ├── ft_putnbr_unsigned.c # affiche un unsigned int
    ├── ft_puthex.c          # affiche en hexadécimal
    └── ft_putpointer.c      # affiche un pointeur
```

### Fonctionnement

1. `ft_printf` parcourt la chaine de format caractère par caractère
2. Quand on trouve un `%`, on regarde le caractère suivant pour savoir quelle conversion faire
3. On appelle `handle_format` qui dispatch vers la bonne fonction selon le spécificateur
4. Chaque fonction retourne le nombre de caractères affichés
5. On additionne tout pour retourner le total à la fin

### Gestion des cas spéciaux

- **String NULL** : affiche "(null)"
- **Pointeur NULL** : affiche "(nil)" sur Linux
- **INT_MIN (-2147483648)** : géré directement avec un write car on ne peut pas faire `-n` dessus

### Pourquoi j'ai utilisé la récursion

Pour `ft_putnbr` et `ft_puthex`, j'utilise la récursion parce que c'est plus simple pour afficher les chiffres dans le bon ordre. On divise par 10 (ou 16 pour l'hexa) jusqu'à avoir un seul chiffre, puis on affiche en remontant.

## Resources

### Documentation utilisée

- man printf -> pour comprendre le comportement de printf
- man stdarg -> pour les fonctions va_start, va_arg, va_end
- man write -> pour l'écriture sur la sortie standard

### Liens utiles

- [Documentation GNU sur printf](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output-Functions.html)
- [Tutoriel sur les fonctions variadiques](https://en.cppreference.com/w/c/variadic)

### Utilisation de l'IA

J'ai utilisé l'IA pour :
- Comprendre certains concepts comme les fonctions variadiques
- Debugger quelques erreurs de segfault
- Vérifier la logique de mon code
