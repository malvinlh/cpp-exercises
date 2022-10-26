#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size, a, temp;
	vector<int> arr;
	
	cout << "Input your desired vector size = ";
	cin >> size;
	
	//for loop untuk memasukkan angka-angka ke dalam vector dgn jumlah yg sesuai size yg diinputkan user.
	for(int i = 0; i < size; i++)
	{
		cin >> a;
		arr.push_back(a);
	}
	cout << endl;
	
	//for loop untuk print unsorted vectors-nya.
	for(int b = 0; b < size; b++)
		cout << arr[b] << " ";
	cout << endl;
	
	//for loops untuk men-sort vector dari terkecil ke terbesar menggunakan metode bubble sort.
	for(int j = 0; j < arr.size(); j++)
	{
		bool swap = false;
		
		for(int k = 0; k < arr.size() - 1; k++)
		{
			if(arr[k] > arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
				swap = true;
			}
		}
		
		if(swap == false)
			break;
			
		cout << endl;
		cout << "tahap " << j + 1 << " = ";
		for(int a = 0; a < arr.size(); a++)
			cout << arr[a] << " ";

	}
	cout << endl << endl;
	
	//for loop untuk print hasil sorted vectors-nya.
	cout << "Hasil = ";
	for(int c = 0; c < arr.size(); c++)
		cout << arr[c] << " ";
	
	return 0;
}
