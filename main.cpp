#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main() {
	printf("Choose Start point...\n");
	printf("1. [H+]\n2. [OH-]\n3. pH\n4. pOH\n");
	int choice;
	scanf("%d",&choice);
	system ("cls");
	switch(choice)
	{
		case 1:
			printf("Convert [H+] to Scientific Notation of A*10^B and input A,B\n");
			double A,B;
			scanf("%le,%le",&A,&B);
			printf("\n");
			printf("[H+]=%le\n",A*pow(10,B));
			printf("[OH-]=%le\n",(1/A)*pow(10,((-14)-B))); 
			printf("[pH]=%le\n",(-log10(A)-B));
			printf("[pOH]=%le\n",14-(-log10(A)-B));
			break;
		case 2:
			printf("Convert [OH-] to Scientific Notation of Z*10^Y and input Z,Y\n");
			double Z,Y;
			scanf("%le,%le",&Z,&Y);
			printf("\n");
			printf("[H+]=%le\n",(1/Z)*pow(10,((-14)-Y)));
			printf("[OH-]=%le\n",Z*pow(10,Y)); 
			printf("[pH]=%le\n",14-(-log10(Z)-Y));
			printf("[pOH]=%le\n",(-log10(Z)-Y));
		    break;
		case 3:
			printf("Input pH as X\n");
			double X,W;
			scanf("%le",&X);
			W = -X;
			printf("\n");
			printf("[H+]=%le\n",pow(10,W));
			printf("[OH-]=%le\n",pow(10,X-14)); 
			printf("[pH]=%le\n",X);
			printf("[pOH]=%le\n",14-X);
		    break;
		case 4:
			printf("Input pOH as V\n");
			double V,U;
			scanf("%le",&V);
			U = -V;
			printf("\n");
			printf("[H+]=%le\n",pow(10,V-14));
			printf("[OH-]=%le\n",pow(10,U));
			printf("[pH]=%le\n",14-V);
			printf("[pOH]=%le\n",V);
			break;
	}
	system("pause");
}
