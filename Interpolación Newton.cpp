#include<bits/stdc++.h>

int n;
double a[20][20];

void iterNew(double res[20][20])
{
	int cont=0;
	double b[n-1];

	printf("\tEcuaciones Normales\n");
	for(int i=2;i<=n;i++)
	{
		for(int j=1+cont;j<n;j++)
		{
			res[i][j] = (res[i-1][j] - res[i-1][j-1])/
			(res[0][j] - res[0][j-1-cont]);
		}
		cont++;
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			printf("%lf\t", res[j][i]);
			res[j][i] = a[j][i];
		}
		printf("\n");
	}

	cont = 0;
	for(int i=1;i<=n;i++)
	{
		b[i-1] = a[i][cont];
		printf("Valor de b%d : %lf   \n", i-1, b[i-1]);
		cont++;
	}

}

int main()
{
	printf("\tEcuaciones Normales");
	printf("\nNumero de datos: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("\nValor de X%d: ", i+1);
		scanf("%lf",&a[0][i]);
		printf("\nValor de Y%d: ", i+1);
		scanf("%lf",&a[1][i]);
		system("cls");
	}
	iterNew(a);
	system("pause");
	return 0;
}
