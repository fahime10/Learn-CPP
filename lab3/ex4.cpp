#include <iostream>
using namespace std;

const int d1 = 3, d2 = 4, d3 = 2;

void multiplyMatrices(int firstMatrix[d1][d2], int secondMatrix[d2][d3], int multResult[d1][d3]);

int main()
{
	int firstMatrix[d1][d2] = {{1,2,1,4},{3,5,7,9},{2,4,6,8}}, 
        secondMatrix[d2][d3] = {{2,3},{7,5},{4,6},{8,10}}, 
        mult[d1][d3];

        multiplyMatrices(firstMatrix, secondMatrix, mult);
        cout << "Output Matrix:" << endl;
        for(int i = 0; i < d1; i++)
        {
            for(int j = 0; j < d3; j++)
                cout << mult[i][j] << " ";
            cout << endl;
        }

	return 0;
}


void multiplyMatrices(int firstMatrix[d1][d2], int secondMatrix[d2][d3], int mult[d1][d3]){
	int i, j, k;
	for(i = 0; i < d1; i++)
		for(j = 0; j < d3; j++)
			mult[i][j] = 0;
	
    
	for(i = 0; i < d1; i++)
		for(j = 0; j < d3; j++)
			for(k=0; k < d2; k++)
				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
	
}
