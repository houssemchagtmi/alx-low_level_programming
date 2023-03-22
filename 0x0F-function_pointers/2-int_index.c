/**
 * int_index - searches for an integer.
 * @array: array of integers to search in.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for which the cmp function does not
 * return 0, or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array && cmp && size > 0)
    {
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return (i);
        }
    }

    return (-1);
}
