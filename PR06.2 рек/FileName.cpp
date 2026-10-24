#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;

void create(int mas[], int n,int i) {
	if(i < n){
		mas[i] = (rand() % 101) - 50;
	create( mas, n, i + 1);
}
		
}
void print(int mas[], int n, int i) {
	if (i < n){
		cout << setw(4) << mas[i];
		print(mas, n, i + 1);
	}
}

int findMax(int mas[], int n, int i, int max_odd, int max_odd_index) {
	if (i >= n) {
		 return max_odd_index;
	}
		if (mas[i] % 2 != 0 && mas[i] > max_odd) {
			max_odd = mas[i];
			max_odd_index = i;
		}
			return findMax(mas, n, i + 1, max_odd, max_odd_index);
		
	}

	

void swapLastWithMax(int mas[], int n,  int max_odd_index) {
	if (max_odd_index != -1) {
		int temp = mas[n - 1];
		mas[n - 1] = mas[max_odd_index];
		mas[max_odd_index] = temp;

	}
}



int main() {
	srand((unsigned)time(0));

	const int n = 10;
	int a[n];

	create(a, n,0);
	cout << "Start mas: "; print(a, n, 0);
	cout << endl;
	int index = findMax(a, n, 0, -1000,-1 );


	if (index != -1) {
		swapLastWithMax(a,n, index);
		cout << "Change mas: "; print(a, n, 0); cout << endl;

	}
	else
		cout << "No odd numbers found!";  cout << endl;
	return 0;
}

