#include <iostream>

int main() {
	// Input array and k value
	int arr[] = { 1, 15, 4, 3, 20, 30 };
	int k = 3;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Sort the array using selection sort
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

	// Print the k'th smallest element
	std::cout << "The " << k << "'th smallest element is: " << arr[k - 1] << std::endl;

	return 0;
}
