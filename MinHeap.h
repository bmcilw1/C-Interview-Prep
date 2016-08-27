// Brian McIlwain
// The purpose of this class is to provide a basic implementation example for a min-heap

#include <std::vector>

class MinHeap
{
private:  
    vector<int> _vector;
    void BubbleDown(int index);
    void BubbleUp(int index);
    void Heapify();

public:
    MinHeap(int* array, int length);
    MinHeap(const vector<int>& vector);
    MinHeap();

    void Insert(int newValue);
    int ExtractMin();
    int PeekMin();
};
