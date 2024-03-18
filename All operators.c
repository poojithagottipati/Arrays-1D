1.Array Declaration and Initialization 

int array[5]; // Declaration of an integer array of size 5
int array[] = {1, 2, 3, 4, 5}; // Declaration and initialization

2. Accessing Elements:

int value = array[2]; // Accessing the third element (index starts from 0)

3.Assigning Values to Elements:

array[3] = 10; // Assigning 10 to the fourth element

4.Traversing the Array:

for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}

5.Calculating the Size of an Array:

int size = sizeof(array) / sizeof(array[0]);

6.Copying Arrays:

int newArray[5];
memcpy(newArray, array, sizeof(array));

7.Finding Maximum or Minimum Element:

int max = array[0];
for (int i = 1; i < 5; i++) {
    if (array[i] > max)
        max = array[i];
}

8.Finding Sum of Elements:

int sum = 0;
for (int i = 0; i < 5; i++) {
    sum += array[i];
}

9.Sorting Array (e.g., Bubble Sort):

for (int i = 0; i < 5 - 1; i++) {
    for (int j = 0; j < 5 - i - 1; j++) {
        if (array[j] > array[j + 1]) {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}

10.Searching an Element (eg. Linear Search):

int searchElement = 3;
int found = 0;
for (int i = 0; i < 5; i++) {
    if (array[i] == searchElement) {
        found = 1;
        break;
    }
}







