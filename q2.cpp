#include <iostream>
#include <vector>

void print(std::vector<int> arr) {
	for (auto val : arr) {
		std::cout << val << ' ';
	}
	std::cout << std::endl;
}

void reverse(std::vector<int>& arr) {
	int size = arr.size();
	if (size < 2) return;

	for (int i = 0; i < size / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void find(std::vector<int> arr) {
	int size = arr.size();

	if (size < 2) { 
		std::cout << "Not enough elements to Find!\n"; 
		return; 
	}

	int max = INT_MIN, min = INT_MAX;
	int secMax = max, secMin = min;

	for (auto val : arr) {
		if (val > max) max = val;
		if (val < min) min = val;
	}

	for (auto val : arr) {
		if (val > secMax && val < max) secMax = val;
		if (val < secMin && val > min) secMin = val;
	}

	std::cout << "Second Largest value: " << secMax << std::endl;
	std::cout << "Second Smallest value: " << secMin << std::endl;
}

int main() {
	int size;

	std::cout << "Enter size of array: "; std::cin >> size;
	std::vector<int> arr(size);

	for (int i = 0; i < size; i++) {
		std::cout << "Enter " << i + 1 << " element: ";
		std::cin >> arr[i];
	}

	std::cout << "Original array: "; print(arr);
	reverse(arr); 
	std::cout << "Reversed array: "; print(arr);

	find(arr);
	return 0;
}