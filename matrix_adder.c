#include <stdio.h>
#define MAX 50
/**
 * main - calls the matrix adder function.
 *
 * Return: 0
 *
 * @arr: array param
 * @nrows: number of rows
 * @ncolumns: number of columns
 *
 */
void matrixElem(int arr[MAX][MAX], int nrows, int ncolumns);
void matrixAdder(int arr[MAX][MAX], int arr2[MAX][MAX], int res[MAX][MAX], int nrows, int ncol);
void matrixPrinter(int arr[MAX][MAX], int nrows, int ncolumns);

int main(void)
{
	int a[MAX][MAX], arows, acolumns;
	int b[MAX][MAX], brows, bcolumns;
	int result[MAX][MAX];

	printf("Enter the number of rows and columns of array a: ");
	scanf("%d %d", &arows, &acolumns);
	matrixElem(a, arows, acolumns);

	printf("Enter the number of rows and columns of array b: ");
	scanf("%d %d", &brows, &bcolumns);

	if (arows != brows || acolumns != bcolumns)
	{
		printf("Matrices must have the same dimensions.\n");
	}
	else
	{
		matrixElem(b, brows, bcolumns);
		matrixAdder(a, b, result, arows, acolumns);
		matrixPrinter(result, arows, acolumns);
	}

	return (0);
}

/**
 * matrixElem - fills a matrix with it elements
 *
 * @arr: array param
 * @nrows: number of rows
 * @ncol: number of columns
 *
 */
void matrixElem(int arr[MAX][MAX], int nrows, int ncol)
{
	printf("Enter the elements of the matrix:\n");
	for (int i = 0; i < nrows; i++)
		for (int j = 0; j < ncol; j++)
			scanf("%d", &arr[i][j]);
}

/**
 * matrixAdder - add up two matrices
 *
 * @arr: matrix 1 param.
 * @arr2: matrix 2 param.
 * @res: result param.
 * @nrow: number of rows
 * @ncol: number of columns
 *
 */
void matrixAdder(int arr[MAX][MAX], int arr2[MAX][MAX], int res[MAX][MAX], int nrow, int ncol)
{

	for (int i = 0; i < nrow; i++)
		for (int j = 0; j < ncol; j++)
			res[i][j] = arr[i][j] + arr2[i][j];
}

/**
 * matrixPrinter - print out the elements in an arr.
 *
 * @arr: array param.
 * @nrows: number of rows
 * @ncol: number of columns
 *
 */
void matrixPrinter(int arr[MAX][MAX], int nrows, int ncol)
{
	printf("The Resultant Matrix is:\n");
	for (int i = 0; i < nrows; i++)
	{
		for (int j = 0; j < ncol; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
