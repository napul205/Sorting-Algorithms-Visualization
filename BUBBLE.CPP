#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h> 

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; ++i) {
	for (j = 0; j < n - i - 1; ++j) {

	    cleardevice();
	    for (int k = 0; k < n; ++k) {
		setcolor(WHITE);
		rectangle(k * 50 + 10, getmaxy() - 50, k * 50 + 60, getmaxy() - 50 - arr[k]);
		char num[10];
		itoa(arr[k], num, 10); // Convert number to a character array
		outtextxy(k * 50 + 30, getmaxy() - 40, num);
	    }
	    delay(500);

	    if (arr[j] > arr[j + 1]) {
		swap(arr[j], arr[j + 1]);
	    }
	}
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");


    int n;
	cout<<"Enter size of array :";
	cin>>n;
    cleardevice();
 int* arr=new int[n];
	  cout<<"Enter arr of "<<n<<" size:";
for( int o=0;o<n;o++)
cin>>arr[o];

    bubbleSort(arr, n);

    cleardevice();
    setcolor(WHITE);
    for (int i = 0; i < n; ++i) {
	rectangle(i * 50 + 10, getmaxy() - 50, i * 50 + 60, getmaxy() - 50 - arr[i]);
	char num[10];
	itoa(arr[i], num, 10);
	outtextxy(i * 50 + 30, getmaxy() - 40, num);
    }

    cout<<"Press Enter to continue...";
    cin.get();
    closegraph();
    return 0;
}

