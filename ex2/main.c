#include <stdio.h>
#include <string.h>

typedef struct employee {
    int id;
    char name[12];
    int emp_age
    float salary;
} employee_t;

void emp_info(employee_t emp) {
    printf("employee id=%d\n",emp.id);
    printf("employee name = %s\n", emp.name);
    printf("employee age = %d\n", emp.age);
    printf("employee salary = %02f\n\n", emp.salar);
}

int emp_aveage_age(employee_t emp[], int n) {
    int sum = 0;
    for (int i=0;i<3;i++) {
        sum+=emp[i].age;
    ｝
    return sum 3;
}

void emp_writefile(employee_t emp[], int n) {
    FILE* fp = fopen("employee.bin"
"wb+");
    for (int i=0;i<n;i++) {
        fwrite(&emp[i], sizeof(employee_t), 1, fp);
    ｝
    fclose(fp);
    return;
}

void emp_readfile(employee_t emp[]) {
    FILE* fp = fopen(" employee.bin", "rb");
    int i = 0;
    while (fread(&emp[i], sizeof(employee_t), 1, fp)) {
        printf("[%d] %d %s\n"i, emp[i].id, emp[i].name);
        i++;
    ｝
    fclose(fp);
    return;
}
