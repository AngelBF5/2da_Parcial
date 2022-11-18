//Basilio Figueroa Miguel Angel
//3D

#include <stdio.h>
#include <stdlib.h>

int list[10];

void mostrarorden(int *list, int n){
	int i;
	for(i = 0; i < n-1; i++)
	
	printf("%d, ", list[i]);
	
	printf("%d", list[n-1]);
	
	printf("\n");
}

int main(){
	
    int n = 10;
    
    archivotxt();
    
    printf("\nNumeros Desordenados: ");
    
    mostrarorden(list, n);
    
    cambioelemento(list, n);
    
    printf("\nNumeros Ordenados: ");
    
    mostrarorden(list, n);
    
    printf("\n");
}


void archivotxt(){
	FILE* archivo;
	char c, texto[20];
	int j=0, i=0;
	int z;

	archivo = fopen("datos.txt","rt");
	do{
		c = fgetc(archivo);
		if (c == ',') {
			list[j] = atoi(texto);
			j++;
			for (z = 0; z<i; z++)
				texto[z]=0;
			i=0;
			continue;
		}
		texto[i] = c;
		i++;
	}while(c!= EOF);
}

void cambioelemento(int *list, int n){
	int i,j;
    for(i=0; i < n; i++){
        int min = i;

        for(j=i+1; j<n; j++){
            if(list[j] < list[min]){
                min = j;
            }
        }
        if(min != i){
            int key = list[min];
            list[min] = list[i];
            list[i] = key;
        }
    }
}
