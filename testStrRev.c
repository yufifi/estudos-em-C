#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    char s1[100],s2[100],aux[100];
    int i,j,tam=0;

    printf("Forneça a primeira entrada: ");
    gets(s1);
    printf("\n");
    printf("Forneça a segunda entrada: ");
    gets(s2);
    printf("\n");

    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++,i++){
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("A string concatenada é: %s\n",s1);

    i=0;
    while(s1[i]!='\0'){
        tam++;
        i++;
    }
    printf("O tamanho da string é: %d\n",tam);

    j=-1;
    for(i=0;s1[i]!='\0';i++){
        j++;
    }
    for(i=0;s1[i]!='\0';i++){
        aux[j]=s1[i];
        j--;
    }
    aux[i]='\0';
    printf("A string invertida é: %s",aux);
  return 0;
}