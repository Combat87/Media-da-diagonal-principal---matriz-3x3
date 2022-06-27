# include <stdio.h>
# include <math.h>
#include <locale.h>

// Média dos elementos da diagonal principal de uma matriz 3 x 3

main()
{	int i, j;
	float soma, media;
	float matriz [3][3];
	setlocale(LC_ALL, "Portuguese");
	printf("Média dos elementos da diagonal principal de uma matriz 3 x 3.\n");
	printf("Informe nove números para preenchimento dessa matriz:\n");
	for (i = 0; i < 3; i ++)
	{		for (j = 0; j < 3; j ++)
		{
			scanf("%f", &matriz[i][j]);
			fflush(stdin);
		}
	}
	
	for(int i=0; i<3; i++)
		{
		for(int j=0; j<3; j++)
			{
				if(i == j)
					{
				soma = soma + matriz[i][j];
					}
			}
		}
		
	printf("A seguir tem-se a matriz preenchida:\n");
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%.2f ", matriz[i][j]);
			}
		printf("\n");
		}
	
	media = soma / 3;
	printf("\nA média dos elementos da diagonal principal é:\n%.2f", media);
	
return 0;	
}
