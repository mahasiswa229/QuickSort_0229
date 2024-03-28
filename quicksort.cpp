#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input()
{
    while (true)
    {
        cout << "Masukan panjang elemen Array :  "; 
        cin >> n;

        if (n <= 20)
        break;
        else
        cout << "Panjang Array tidak boleh lebih dari 20" << endl;
    }

     cout << "------------------" << endl;
     cout <<  "Masukkan elemen array : " << endl;
     cout << "------------------" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">"
    }
}

void swap(int x,int y)
{
    int temp=arr[x] ;
    arr[x]=arr[y] ;
    arr[y]=temp ;
    mov_count++;
}

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
        cmp_count++;
        if (i < j)
        {
            swap(i,j);
        }
    }

    if (low < j)
    {
        swap (low,j);
    }

    q_sort(low, j - 1);
    q_sort(j + i ,high);
    
}

void display()
{
    cout << "----------------" << endl;
    cout << " sorted array " << endl;
    cout << "----------------" << endl;

    for  (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Number of Comparisons: " << cmp_count << endl;
    cout << "Number of Data Movements" << mov_count << endl;
}
int main()
{
    char ch;

    do
    {
        input;
        q_sort(0,n-1);
        display();
        cout << "\nDo you want to continue? Y/N :";
        cin >> ch;
        if (ch  == 'N' || ch =='n')
        break;
        
        system("pause");
        system("cls");
        
    } while (true);
    

}