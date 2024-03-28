#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void q_sort(int low,int high)
{
    int temp;
    int pivot, i, j;
    
    if (low > high)
    {
        return ;
    }

    pivot = arr[low];
    i = low + 1;
    j = high;

    while (i  <= j)
    {
        while ((arr[i] <= pivot) && (i <= high))
        {
            i++;
            cmp_count++;
        }
        cmp_count++;

        while ((arr[j] > pivot) && (j >= low))
        {
            j--;
            cmp_count++;
        }
        
    }
    
}


int main()
{

}