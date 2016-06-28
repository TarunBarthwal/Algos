# include <iostream>
# include <vector>

using namespace std;

typedef vector<int> Vector;

void buildHeap(Vector &);
void maxHeapify(Vector &, int);
void heapSort(Vector &);
Vector dataInput();

//Array starts with index 0, hence all the -1 and +1 changes
int leftChild(int i)
{
    return 2 * i + 1;
}
int rightChild(int i)
{
    return 2 * i + 2;
}

int main()
{
    Vector A = dataInput();
    heapSort(A);

    return 0;
}

void buildHeap(Vector &A)
{
    for (int i = A.size() / 2 - 1; i >= 0; i--) //
        maxHeapify(A, i);
}

void maxHeapify(Vector &A, int i)
{
    int largest = i;
    if (leftChild(i) < A.size()) &&(A[leftChild(i)] > A[i])
    largest = leftChild(i);
    if (rightChild(i) < A.size()) &&(A[rightChild(i)] > A[i])
    largest = rightChild(i);

    if (largest != i)
    {
        int temp = A[largest];
        A[largest] = A[i];
        A[i] = temp;
        maxHeapify(A, largest);
    }
}

void heapSort(Vector &A)
{
    buildHeap(A);
    Vector temp = A;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        A[i] = temp[0]
        );
        temp[0] = temp.back();
        temp.pop_back();
        maxHeapify(temp, 0);
    }

}
