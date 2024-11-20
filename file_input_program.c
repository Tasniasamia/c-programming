#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out;

    int num1, num2, num3;
    char paragraph[1000];


    fp_in = fopen("input.txt", "r");
    fp_out = fopen("output.txt", "w");

    if (fp_in == NULL) {
        printf("NO file here\n");
        return 1;
    }

    printf("File opened successfully!\n");


   // fscanf(fp_in, "%d", &num1);
    fgetc(fp_in);
    fgetc(fp_in);
    fgets(paragraph, 1000, fp_in);
    sscanf(paragraph,"%d %d",num2,num3);

   // fscanf(fp_in, "%d", &num3);






    fprintf(fp_out, "%s", paragraph);
    //fprintf(fp_out, "%d", num1 + num2 + num3);


    //printf("Number is %d\n", num1 + num2 + num3);
   // printf("Number1 is %d\n", num1);
    printf("Number2 is %d\n", num2);
   // printf("Number3 is %d\n", num3);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
