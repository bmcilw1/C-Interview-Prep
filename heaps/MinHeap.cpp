// Brian McIlwain
// This class provides an implementation of an integer min-hea

#include "MinHeap.h"

MinHeap::MinHeap(int* array, int length) : _vector(length)
{
    for(int i = 0; i < length; ++i)
    {
        _vector[i] = array[i];
    }

    Heapify();
}

MinHeap::MinHeap() 
{
}

void MinHeap::Heapify()
{
    int length = _vector.size();
    for(int i=length-1; i>=0; --i)
    {
        BubbleDown(i);
    }
}

void MinHeap::BubbleDown(int index)
{
    int length = _vector.size();
    int leftChildIndex = 2*index + 1;
    int rightChildIndex = 2*index + 2;

    if(leftChildIndex >= length)
        return; //index is a leaf

    int minIndex = index;

    if(_vector[index] > _vector[leftChildIndex])
    {
        minIndex = leftChildIndex;
    }
    
    if((rightChildIndex < length) && (_vector[minIndex] > _vector[rightChildIndex]))
    {
        minIndex = rightChildIndex;
    }

    if(minIndex != index)
    {
        //need to swap
        int temp = _vector[index];
        _vector[index] = _vector[minIndex];
        _vector[minIndex] = temp;
        BubbleDown(minIndex);
    }
}

void MinHeap::BubbleUp(int index)
{
    if(index == 0)
        return;

    int parentIndex = (index-1)/2;

    if(_vector[parentIndex] > _vector[index])
    {
        int temp = _vector[parentIndex];
        _vector[parentIndex] = _vector[index];
        _vector[index] = temp;
        BubbleUp(parentIndex);
    }
}

void MinHeap::Insert(int newValue)
{
    int length = _vector.size();
    _vector[length] = newValue;

    BubbleUp(length);
}

int MinHeap::PeekMin()
{
    return _vector[0];
}
    
int MinHeap::ExtractMin()
{
    int length = _vector.size();

    if(length == 0)
    {
        return 0;
    }
    
    _vector[0] = _vector[length-1];
    int value = _vector.pop_back();

    BubbleDown(0);
    return value;
}
