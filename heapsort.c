heap sort code :

#include <iostream>
#include <vector>

    void
    printArray(const std::vector<int> &arr)
{
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void heapify(std::vector<int> &arr, int n, int i, bool ascending)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (ascending)
    {
        if (left < n && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right < n && arr[right] > arr[largest])
        {
            largest = right;
        }
    }
    else
    {
        if (left < n && arr[left] < arr[largest])
        {
            largest = left;
        }
        if (right < n && arr[right] < arr[largest])
        {
            largest = right;
        }
    }

    if (largest != i)
    {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest, ascending);
    }
}

void heapSort(std::vector<int> &arr, bool ascending)
{
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i, ascending);
    }

    for (int i = n - 1; i > 0; i--)
    {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0, ascending);
    }
}

int main()
{
    std::vector<int> arr;
    int n, choice;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    std::cout << "Choose sorting order (1 for ascending, 2 for descending): ";
    std::cin >> choice;

    if (choice == 1)
    {
        heapSort(arr, true);
        std::cout << "Sorted array in ascending order: ";
    }
    else if (choice == 2)
    {
        heapSort(arr, false);
        std::cout << "Sorted array in descending order: ";
    }
    else
    {
        std::cout << "Invalid choice. Exiting...";
        return 1;
    }

    printArray(arr);

    return 0;
}