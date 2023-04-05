/*
** EPITECH PROJECT, 2023
** toml_table_new.c
** File description:
** toml_table_new.c
*/

#include "toml/table_impl.h"
#include "my/memory.h"

toml_table_t *toml_table_new(void)
{
    toml_table_t *table = my_calloc(sizeof(toml_table_t));

    if (table == NULL)
        return NULL;
    table->length = 32;
    table->nodes = my_calloc(sizeof(toml_table_node_t *) * table->length);
    if (table->nodes == NULL) {
        toml_table_delete(table);
        return NULL;
    }
    return table;
}
