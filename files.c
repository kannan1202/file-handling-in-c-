#include <stdio.h>
#include <stdlib.h>

int main()
{  /*copying the data from one file to another file */
   FILE* fp1,*fp2;
   int ch;
   fp1 = fopen("C:/Users/Kannan P/Desktop/c.prog/files/filehandlinginc.txt","r");
   fp2 = fopen("C:/Users/Kannan P/Desktop/c.prog/files/newfile.txt","w");
   if(fp1==NULL)
   {
   	puts("unable to open the file");
   }
   else
   {
   		while((ch = fgetc(fp1))!= EOF)
   		{
   			fputc(ch,fp2);
		}
   	puts("data copied successfully into few file.\n");
   }
    fclose(fp2);
    
    
    
    FILE *fp;
    char cha, fname[30], newch[500];
    int i=0, j, COUNT=0;
    fp = fopen("C:/Users/Kannan P/Desktop/c.prog/files/filehandlinginc.txt", "r");
    if(!fp)
    {
        printf("Error in opening the file...\nExiting...");
        return 0;
    }
    printf("\nThe original content is:\n\n");
    cha = getc(fp);
    while(cha != EOF)
    {
        COUNT++;
        putchar(cha);
        newch[i] = cha;
        i++;
        cha = getc(fp);
    }
    printf("\n");
    printf("The content in reverse order is:\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        cha = newch[j];
        printf("%c", cha);
    }
    printf("\n");
    return 0;
}
