# ft_printf

## Description du Projet

`ft_printf` est une recréation de la fonction standard `printf` en C. Ce projet fait partie du cursus de l'école 42 et a pour but de comprendre en profondeur le fonctionnement des fonctions variadiques (à nombre variable d'arguments) en C, ainsi que la gestion des formats de chaînes de caractères.

La fonction `ft_printf` prend en charge plusieurs conversions de base, telles que `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, et `%%`. Elle imprime des données formatées sur la sortie standard (généralement l'écran), tout comme la fonction `printf` de la bibliothèque standard C.

---

## Fonctionnalités Implémentées

| Conversion | Description                                                                 |
|------------|-----------------------------------------------------------------------------|
| `%c`       | Affiche un caractère.                                                       |
| `%s`       | Affiche une chaîne de caractères.                                           |
| `%p`       | Affiche un pointeur (adresse mémoire) en hexadécimal.                       |
| `%d`       | Affiche un entier signé en base 10.                                         |
| `%i`       | Affiche un entier signé en base 10 (identique à `%d`).                      |
| `%u`       | Affiche un entier non signé en base 10.                                     |
| `%x`       | Affiche un entier non signé en hexadécimal (lettres en minuscules).         |
| `%X`       | Affiche un entier non signé en hexadécimal (lettres en majuscules).         |
| `%%`       | Affiche un caractère `%`.                                                   |

---

## Comment Utiliser `ft_printf`

1. **Cloner le Dépôt** :  
   Clonez ce dépôt sur votre machine locale :

   ```bash
   git clone https://github.com/votre_nom_utilisateur/ft_printf.git
