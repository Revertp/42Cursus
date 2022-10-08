# **Libft**
https://github.com/lionell15/libft/blob/3148f65fb1455a798629eff1684486de485c7acf/README.md 

| Nombre de la función: | memset |
| ------------- | ------------- |
| Prototipo: | _void *ft_memset(void *b, int c, size_t len);_ |
| Descripción: | Copia el caracter c (transformado de char) a los primeros n caracteres de (b). |


| Nombre de la función: | bzero |
| ------------- | ------------- |
| Prototipo: |  _void ft_bzero(void *s, size_t n);_ |
| Descripción: | Pone a cero los n primeros bytes de la cadena de bytes s.  |

| Nombre de la función: | memcpy |
| ------------- | ------------- |
| Prototipo: |  _void *ft_memcpy(void *dst, const void *src, size_t n);_ |
| Descripción: | Copia n caracteres del area de la memoria de src en el area de la memoria de dst. |

| Nombre de la función: | memccpy |
| ------------- | ------------- |
| Prototipo: |  _void *ft_memccpy(void *dst, const void *src, int c, size_t n);_ |
| Descripción: | Copia  como mucho n bytes desde el área de memoria src al área de memoria dst, parando cuando se encuentra el carácter c. |

| Nombre de la función: | memmove |
| ------------- | ------------- |
| Prototipo: |  _void *ft_memmove(void *dst, const void *src, size_t len);_ |
| Descripción: | Copia los primeros n caracteres del objeto apuntado por src al objeto apuntado por dst. Sin embargo, se asegura de que no estén superpuestos. |

| Nombre de la función: | memchr |
| --------------- | ------------- |
| Prototipo: | _void *ft_memchr(const void *s, int c, size_t n);_ |
| Descripción: | Localiza la primera aparición del carácter c (convertido a unsigned char) en los primeros n caracteres (cada uno interpretado como un unsigned char) del objeto apuntado por s. |

| Nombre de la función: | memcmp |
| --------------------- | ------ |
| Prototipo: | _int ft_memcmp(const void *s1, const void *s2, size_t n);_ |
| Descripción: | Compara los caracteres de dos búferes de memoria. |

| Nombre de la función: | strlen |
| --------------------- | ------ |
| Prototipo: | _size_t ft_strlen(const char *s);_ |
| Descripción: | Obtiene la longitud de una cadena |

| Nombre de la función: | strlcpy |
| -------------------- | -------- |
| Prototipo: | _size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);_ |
| Descripción: | Copia dstsize caracteres de la cadena  src en la cadena dst. |

| Nombre de la función: | strlcat |
| -------------------- | -------- |
| Prototipo: | _size_t ft_strlcat(char *dst, const char *src, size_t dstsize);_ |
| Descripción: | Concatena la cadena de caracteres src en la cadena dst limitada por dstsize. |

| Nombre de la función: | strchr |
| -------------------- | -------- |
| Prototipo: | _char *ft_strchr(const char *s, int c);_|
| Descripción: |  Buscar la primera ocurrencia de (c) en la cadena (s) y devuelve su posición.|

| Nombre de la función: | strrchr |
| -------------------- | -------- |
| Prototipo: | _char *ft_strrchr(const char *s, int c);_ |
| Descripción: | Busca la ultima ocurrencia de (c) en la cadena (s) y devuelve su posición. |

| Nombre de la función: | strnstr |
| -------------------- | -------- |
| Prototipo: | _char *ft_strnstr(const char *haystack, const char *needle, size_t len);_ |
| Descripción: |  Busca la secuencia de carácteres contenida en la subcadena en una cadena de texto. |

| Nombre de la función: | strncmp |
| -------------------- | -------- |
| Prototipo: | _int	ft_strncmp(const char *s1, const char *s2, size_t n);_|
| Descripción: | Compara la cadena s1 con la cadena s2 hasta el n carcater. |

| Nombre de la función: | atoi |
| -------------------- | -------- |
| Prototipo: | _int	ft_atoi(const char *str);_|
| Descripción: | Convierte una cadena a su valor numérico (entero) |

| Nombre de la función: | isalpha |
| -------------------- | -------- |
| Prototipo: | _int	ft_isalpha(int c);_ |
| Descripción: |  Comprueba si el caracter c es un caracter alfabético |

| Nombre de la función: | isdigit |
| -------------------- | -------- |
| Prototipo: | _int	ft_isdigit(int c);_|
| Descripción: | Comprueba si el caracter c es un caracter numérico de (0 - 9) |

| Nombre de la función: | isalnum |
| -------------------- | -------- |
| Prototipo: | _int	ft_isalnum(int c);_|
| Descripción: |  Comprueba si el caracter c es un caracter alfanumérico (a - z) o (0 - 9) |

| Nombre de la función: | isascii |
| -------------------- | -------- |
| Prototipo: | _int	ft_isascii(int c);_|
| Descripción: |  Comprueba si el carqcter c es un caracter existente en la tabla ascii. |

| Nombre de la función: | isprint |
| -------------------- | -------- |
| Prototipo: | _int	ft_isprint(int c);_|
| Descripción: | Comprueba si el caracter c es un caracter imprimible.  |

| Nombre de la función: | toupper |
| -------------------- | -------- |
| Prototipo: | _int	ft_toupper(int c);_|
| Descripción: | Convierte el caracter c en un caracter mayuscula. |

| Nombre de la función: | tolower |
| -------------------- | -------- |
| Prototipo: | _int	ft_tolower(int c);_|
| Descripción: | Convierte el caracter c en un caracter minuscula. |

| Nombre de la función: | calloc |
| -------------------- | -------- |
| Prototipo: | _void *ft_calloc(size_t count, size_t size);_|
| Descripción: | Asigna una matriz en la memoria con elementos que se inicializan en 0. |

| Nombre de la función: | strdup |
| -------------------- | -------- |
| Prototipo: | _char *ft_strdup(const char *s1);_|
| Descripción: | La  función  strdup()  devuelve  un  puntero  a  una  nueva cadena de caracteres que es un duplicado de la cadena apuntada por s.   La  memoria  para  la  nueva  cadena  se  obtiene automáticamente con malloc(3), y puede (y debe) liberarse con free(3). |

</details>

## Parte 2

<details>
<summary> Funciones adicionales </summary>



| Nombre de la función: | ft_substr |
| --------------------- | --------- |
| Prototipo: | _char *ft_substr(char const *s, unsigned int start, size_t len);_ |
| Descripción: | Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres que proviene de la cadena pasada como argumento. Esta nueva cadena comienza en el índice ’start’ y tiene como tamaño máximo ’len’. |

| Nombre de la función: | ft_strjoin |
| --------------------- | --------- |
| Prototipo: |  _char *ft_strjoin(char const *s1, char const *s2);_|
| Descripción: | Reserva memoria (con malloc(3)) y devuelve la nueva cadena de caracteres que resulta de la concatenación de ’s1’ y ’s2’. |

| Nombre de la función: | ft_strtrim |
| --------------------- | --------- |
| Prototipo: | _char ft_strtrim(char const *s1, char const *set);_|
| Descripción: | Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres que es una copia de ’s1’, sin los caracteres indicados en el ’set’ al principio y al final de la cadena de caracteres. |

| Nombre de la función: | ft_split |
| --------------------- | --------- |
| Prototipo: |  _char **ft_split(char const *s, char c);_ |
| Descripción: | Reserva memoria (con malloc(3)) y devuelve una tabla de cadena de caracteres obtenida separando ’s’ con el carácter ’c’, que se utiliza como delimitador. La tabla debe terminar con NULL. |

| Nombre de la función: | ft_itoa |
| --------------------- | --------- |
| Prototipo: | _char *ft_itoa(int n);_ |
| Descripción: | Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres que representa el integer pasado como argumento. Se deben gestionar los números negativos. |

| Nombre de la función: | ft_strmapi |
| --------------------- | --------- |
| Prototipo: | _char *ft_strmapi(char const *s, char (*f)(unsigned int, char);_ |
| Descripción: | Aplica la función ’f’ a cada carácter de la de cadena de caracteres ’s’ para crear una nueva cadena de caracteres (con malloc (3)) que resulte de las aplicaciones sucesivas de ’f’. |

| Nombre de la función: | ft_putchar_fd |
| --------------------- | --------- |
| Prototipo: | _void ft_putchar_fd(char c, int fd);_ |
| Descripción: |  Escribe el carácter ’c’ sobre el descriptor de fichero proporcionado. |

| Nombre de la función: | ft_putstr_fd |
| --------------------- | --------- |
| Prototipo: | _void ft_putstr_fd(char *s, int fd);_ |
| Descripción: | Escribe la cadena de caracteres ’s’ sobre el descriptor de fichero proporcionado. |

| Nombre de la función: | ft_putendl_fd |
| --------------------- | --------- |
| Prototipo: | _void ft_putendl_fd(char *s, int fd);_ |
| Descripción: | Escribe la cadena de caracteres ’s’ sobre el descriptor de fichero proporcionado, seguida de un salto de línea. |

| Nombre de la función: | ft_putnbr_fd |                              
| --------------------- | --------- |
| Prototipo: | _void ft_putnbr_fd(int nb, int fd);_  |
| Funciones externas autorizadas: | write |
| Descripción: |  Escribe el entero ’n’ sobre el descriptor de fichero proporcionado. |

</details>

## Parte extra

<details>
<summary> Bonus </summary>

| Nombre de la función: | ft_lstnew |
| --------------------- | --------- |
| Prototipo: | _t_list *ft_lstnew(void *content);_ |
| Descripción: | Reserva memoria (con malloc(3)) y devuelve un nuevo elemento. La variable ’content’ se inicializa mediante el valor del parámetro ’content’. La variable ’next’ se inicializa con NULL. |

| Nombre de la función: | ft_lstadd_front |
| --------------------- | --------------- |
| Prototipo: | _void ft_lstadd_front(t_list **alst, t_list *new);_ |
| Descripción: | Añade el elemento ’new’ al principio de la lista. |

| Nombre de la función: | ft_lstsize |
| --------------------- | ---------- |
|Prototipo: | _int ft_lstsize(t_list *lst);_ | 
| Ficheros a entregar: | ft_lstsize.c |
| Descripción: | Cuenta el número de elementos de la lista. |

| Nombre de la función: | ft_lstlast |
| --------------------- | --------------- |
| Prototipo: | _t_list *ft_lstlast(t_list *lst);_ |
| Descripción: | Devuelve el último elemento de la lista. |

| Nombre de la función: | ft_lstadd_back |
| --------------------- | --------------- |
| Prototipo: |  _void ft_lstadd_back(t_list **lst, t_list *new);_ |
| Descripción: | Añade el elemento ’new’ al final de la lista. |

| Nombre de la función | ft_lstdelone |
| --------------------- | --------------- |
| Prototipo: | _void ft_lstdelone(t_list *lst, void (*del)(void*));_ |
| Descripción: | Libera la memoria del elemento pasado como argumento utilizando la función ’del’ y después free(3). No se debe liberar la memoria de ’next’. |
