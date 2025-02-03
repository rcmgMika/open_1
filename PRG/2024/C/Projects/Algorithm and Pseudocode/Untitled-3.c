Sorting algorithm, numbers in ascending order

Algorithm 
1. Include header files of string and standard input and output
2. In the main function, include an array that is to be sorted and calculates the number of elements in that array
3. Write a void function with a nested loop, with arguments consisting the array and its correspoding sum of elements
4. The outer loop's index will be i and its condition will be if the index is less than that of the size of the array
5. The inner loop's index will be j and its condition will be if the index is less than that of the size of the array minus one
6. In the inner loop, include an if statement that states if index 0 is less than index 1, swap the value of the first index into the second one
7. Write another function that will print the array


Pseudocode

void sort(int arrayRandom, size);
void printArray(int arrayRandom, size);

int main()
{
    int arrayRandom[] = the random values that is to be sorted;
    int size = calculated the total byte of that arrayRandom devided by the byte per element in that data type;
}

void sort(int arrayRandom[], size)
{
    for(int i = 0; i is less than the size of the array; increment by 1)
    {
        for(int j = 0; j is less than the size of the array minus 1; increment by 1)
        {
            if(index 0 is less than index 1)
            {
                int temp = arrayRandom,[j];
                arrayRandom[j] = arrayRandom[j+1]
                arrayRandom[j+1] = temp;
            }
        }
    }
}

void printArray(int arrayRandom[], size)
{
    for(int = 0; i < size; increment)
    {
        printf("%d ", arrayRandom[i]);
    }
}


Code

void sort(int arrayRandom[], int size);
void printArray(int arrayRandom, int size);

int main()
{
    int arrayRandom[] = (1, 5, 6, 7, 4, 3, 2, 8, 9);
    int size = sizeof(arrayRandom)/sizeof(arrayRandom[0]);
}

void sort(int arrayRandom[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(arrayRandom[j] > arrayRandom[j+1])
            {
                int temp = arrayRandom,[j];
                arrayRandom[j] = arrayRandom[j+1]
                arrayRandom[j+1] = temp;
            }
        }
    }
}

void printArray(int arrayRandom[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arrayRandom[i]);
    }
}