#include <stdio.h>
#include <stdlib.h>

enum permissions {
    view = 1,
    add = 2,
    edit = 4,
    destroy = 8
} permission;

void main()
{
    // 1111
    unsigned int user_permissions = 15;
    print_permissions(user_permissions);
}

int can_view(int user_permissions)
{
    return user_permissions & view;
}

int can_add(int user_permissions)
{
    return user_permissions & add;
}

int can_edit(int user_permissions)
{
    return user_permissions & edit;
}

int can_destroy(int user_permissions)
{
    return user_permissions & destroy;
}

void print_permissions(int user_permissions) {
    if(can_view(user_permissions)) {
        printf("Can View\n");
    }

    if(can_add(user_permissions)) {
        printf("Can Add\n");
    }

    if(can_edit(user_permissions)) {
        printf("Can Edit\n");
    }

    if(can_destroy(user_permissions)) {
        printf("Can Destroy\n");
    }
}
