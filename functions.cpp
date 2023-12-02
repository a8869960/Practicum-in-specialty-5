//
// Created by varsem on 20.11.23.
//
#include "functions.h"

void *process_main(void *arg_)
{
    ARGS *arg = (ARGS*)arg_;
    int p = arg->p;
    double cpu_time = get_CPU_time(), full_time = get_full_time();

    if(arg->n <= 2) return 0;

    is_fibonacci(arg);
    reduce_sum(p);

    change_elements(arg);
    reduce_sum(p);

    for(int i = arg->m; i < arg->n; i += arg->p)
        if(arg->is_fibonacci[i])
            arg->a[i] = arg->a_help[i];

    arg->cpu_time = get_CPU_time() - cpu_time;
    arg->full_time = get_full_time() - full_time;

    return 0;
}

void is_fibonacci(ARGS *arg)
{
    int p = arg->p, m = arg->m, n = arg->n;
    double *a = arg->a;
    for(int i = m + 2; i < n; i += p)
    {
        if(abs(a[i] - a[i - 1] - a[i - 2]) < eps)
        {
            arg->is_fibonacci[i] = true;
            arg->is_fibonacci[i - 1] = true;
            arg->is_fibonacci[i - 2] = true;
        }
    }
}

void change_elements(ARGS *arg)
{
    int p = arg->p, m = arg->m, n = arg->n;
    double first, last, average = 0;
    double *a = arg->a, *a_help = arg->a_help;

    for(int i = m; i < n; i += p)
    {
        if(!arg->is_fibonacci[i]) continue;

        //First
        int j = 0;
        if(i != 0)
            while(arg->is_fibonacci[i - j - 1] and i - j - 1 >= 0)
                j++;

        first = a[i - j];

        //Last
        j = 0;
        if(i != n - 1)
            while(arg->is_fibonacci[i + j + 1] and j + i + 1 < n)
                j++;

        last = a[i + j];

        average = (first + last) / 2;

        a_help[i] = average;
    }
}