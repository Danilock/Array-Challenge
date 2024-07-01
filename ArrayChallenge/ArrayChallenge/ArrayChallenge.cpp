#include <iostream>

void Input();
void CheckHighestNumber(int size);
int GetHighestNumber(int array[], int size);

int main(int argc, char* argv[])
{
    Input();
    
    return 0;
}

void Input()
{
    int arraySize = 0;

    std::cout << "Insert array size: ";
    std::cin >> arraySize;

    if(arraySize < 1)
    {
        std::cout << "Array size must be above 1" << std::endl << "================================" << std::endl;
        Input();
    }

    CheckHighestNumber(arraySize);
}

void CheckHighestNumber(int size)
{
    int* numbers = new int[size];
    
    for(int i = 0; i < size; i++)
    {
        std::cout << "Number #" << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    
    const int highestNumber = GetHighestNumber(numbers, size);

    std::cout << "Highest number is: " << highestNumber;
}

int GetHighestNumber(int array[], int size)
{
    int highestNumber = array[0];

    for(int i = 0; i <= size; i++)
    {
        if(array[i] > highestNumber)
            highestNumber = array[i];
    }

    return highestNumber;
}
