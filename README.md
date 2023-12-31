# Practicum-in-specialty-5
Этот проект - мое решение представленной ниже задачи.

## Задача
- Написать multithread функцию, получающую в качестве аргументов массив *a* вещественных чисел, целое число *n*, являющееся длиной этого массива,
номер потока (thread) *m*, общее количество потоков (threads) *p*,
и заменяющую каждый элемент в участке, таком, что *a<sub>k</sub> = a<sub>k-1</sub> + a<sub>k-2</sub>* (подпоследовательность Фибоначчи), на среднее арифметическое первого и последнего элементов участка.
Функция возвращает количество измененных элементов
массива (единый ответ во всех потоках). При этом должна быть обеспечена равномерная загрузка всех потоков и изменение ими только "своих" элементов массива.
Основная программа должна принимать числа *p, n* и имя файла, из которого считывается массив *a*, в качестве аргументов командной строки, запускать *p - 1* потоков (т.е. вместе с main *p* потоков),
в которых вызывается эта функция, выводить на экран результат, а также процессорное время, затраченное на каждый поток и суммарно на все потоки. Вывод результирующего массива команды **./a.out p n filename**
должен быть **в одну строку с префиксом RESULT p:**, например: RESULT 4: *a<sub>0</sub> a<sub>1</sub> ... a<sub>n-1</sub>* для *p = 4*. Основная программа main  должна возвращать -1, -2 и т.д.,
если не удалось открыть файл,прочитать элемент и т.д., и 0 в случае успешного завершения.