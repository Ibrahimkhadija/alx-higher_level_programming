#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> 0x01-python-if_else_loops_functions
=======

>>>>>>> 4ce559d9ceec00eb4ee1eb47325e4a252679e525
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 4ce559d9ceec00eb4ee1eb47325e4a252679e525
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);
<<<<<<< HEAD
=======
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);
>>>>>>> 0x01-python-if_else_loops_functions
=======
>>>>>>> 4ce559d9ceec00eb4ee1eb47325e4a252679e525

#endif /* LISTS_H */
