# ft_printf

## Description du Projet

`ft_printf` est une recréation de la fonction standard `printf` en C. Ce projet fait partie du cursus de l'école 1337 et a pour but de comprendre en profondeur le fonctionnement des fonctions variadiques (à nombre variable d'arguments) en C, ainsi que la gestion des formats de chaînes de caractères.

La fonction `ft_printf` prend en charge plusieurs conversions de base, telles que `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, et `%%`. Elle imprime des données formatées sur la sortie standard (généralement l'écran), tout comme la fonction `printf` de la bibliothèque standard C.

## Fonctionnalités Implémentées

| Conversion | Description |
|------------|-------------|
| `%c` | Affiche un caractère |
| `%s` | Affiche une chaîne de caractères |
| `%p` | Affiche un pointeur (adresse mémoire) en hexadécimal |
| `%d` | Affiche un entier signé en base 10 |
| `%i` | Affiche un entier signé en base 10 (identique à `%d`) |
| `%u` | Affiche un entier non signé en base 10 |
| `%x` | Affiche un entier non signé en hexadécimal (lettres en minuscules) |
| `%X` | Affiche un entier non signé en hexadécimal (lettres en majuscules) |
| `%%` | Affiche un caractère `%` |

## Comment Utiliser `ft_printf`

### 1. Cloner le Dépôt

Clonez ce dépôt sur votre machine locale :

```bash
git clone https://github.com/haboulah/ft_printf.git
```

### 2. Compiler le Projet

Allez dans le répertoire du projet et compilez-le avec `make` :

```bash
cd ft_printf
make
```

Cela générera une bibliothèque statique appelée `libftprintf.a`.

### 3. Utiliser `ft_printf` dans Votre Projet

Pour utiliser `ft_printf` dans votre propre projet, incluez le fichier d'en-tête `ft_printf.h` et liez la bibliothèque `libftprintf.a`. Voici un exemple :

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Bonjour, %s ! %d %%\n", "le monde", 1337);
    ft_printf("Adresse : %p\n", main);
    ft_printf("Hexadécimal : %x\n", 255);
    return (0);
}
```

Compilez votre programme avec :

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o mon_programme
```

### 4. Exécuter le Programme

Exécutez le programme compilé :

```bash
./mon_programme
```

Vous devriez voir la sortie suivante :

```
Bonjour, le monde ! 1337 %
Adresse : 0x1045f6e40
Hexadécimal : ff
```

## Structure du Projet

- `ft_printf.c` : Contient la fonction principale `ft_printf`
- `utils.c` : Contient des fonctions utilitaires pour gérer les conversions de base
- `conversions.c` : Contient des fonctions pour gérer les conversions plus complexes (comme les pointeurs)
- `ft_printf.h` : Le fichier d'en-tête contenant les prototypes des fonctions et les définitions nécessaires
- `Makefile` : Automatise la compilation du projet
