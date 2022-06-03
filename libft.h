/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:49:36 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 20:31:08 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *nptr);

void	ft_bzero(void *b, size_t len);

void	*ft_calloc(size_t nitems, size_t size);

int		ft_isalnum(int c);

int		ft_isalpha(int value);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

//Allocates (with malloc(3)) and returns a string
//representing the integer received as an argument.
//Negative numbers must be handled
char	*ft_itoa(int n);

//Adds the node ’new’ at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new);

//lst: The address of a pointer to the first link of
//a list.
//new: The address of a pointer to the node to be
//added to the list.
void	ft_lstadd_front(t_list **lst, t_list *new);

//Deletes and frees the given node and every
//successor of that node, using the function ’del’
//and free(3).
//Finally, the pointer to the list must be set to
//NULL.
void ft_lstclear(t_list **lst, void (*del)(void*));

//takes as a parameter a node and frees the memory of
//the node’s content using the function ’del’ given
//as a parameter and free the node. The memory of
//’next’ must not be freed
void	ft_lstdelone(t_list *lst, void (*del)(void*));

//Iterates the list ’lst’ and applies the function
//’f’ on the content of each node
void	ft_lstiter(t_list *lst, void (*f)(void *));

//Returns the last node of the list.
t_list	*ft_lstlast(t_list *lst);

//terates the list ’lst’ and applies the function
//’f’ on the content of each node. Creates a new
//list resulting of the successive applications of
//the function ’f’. The ’del’ function is used to
//delete the content of a node if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//Allocates (with malloc(3)) and returns a new node.
//The member variable ’content’ is initialized with
//the value of the parameter ’content’. The variable
//’next’ is initialized to NULL.
t_list	*ft_lstnew(void *content);

//Counts the number of nodes in a list.
int		ft_lstsize(t_list *lst);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *str, int c, size_t n);

//Outputs the character ’c’ to the given file
//descriptor
void	ft_putchar_fd(char c, int fd);

//Outputs the string ’s’ to the given file descriptor
//followed by a newline.
void	ft_putendl_fd(char *s, int fd);

//Outputs the integer ’n’ to the given file
//descriptor.
void	ft_putnbr_fd(int n, int fd);

//Outputs the string ’s’ to the given file
//descriptor
void	ft_putstr_fd(char *s, int fd);

//Allocates (with malloc(3)) and returns an array
//of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter. The array must end
//with a NULL pointer.
char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup(const char *s);

//Applies the function ’f’ on each character of
//the string passed as argument, passing its index
//as first argument. Each character is passed by
//address to ’f’ to be modified if necessary.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//Allocates (with malloc(3)) and returns a new
//string, which is the result of the concatenation
//of ’s1’ and ’s2’.
char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *s);

//Applies the function ’f’ to each character of the
//string ’s’, and passing its index as first argument
//to create a new string (with malloc(3)) resulting
//from successive applications of ’f’.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

char	*ft_strrchr(const char *str, int c);

//Allocates (with malloc(3)) and returns a copy of
//’s1’ with the characters specified in ’set’ removed
//from the beginning and the end of the string
char	*ft_strtrim(char const *s1, char const *set);

//Allocates (with malloc(3)) and returns a substring
//from the string ’s’.
//The substring begins at index ’start’ and is of
//maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif
