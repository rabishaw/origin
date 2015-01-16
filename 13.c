#include <stdio.h>
#include <string.h>
main()
{
    char *a[]={"FrIiends is an american television sitcom",    //*line to be checked*
                "created by David crane and marta kauffman",
                "which originally aired on NBC"};
    int i=0,len=0,j=0,count=0;                            //Initialization of certain variables
    for(i=0;i<3;i++){
        count=0;                    //Count always made 0 for new line
        len=strlen(*(a+i));         //Lenght for new line is stored here every time
        for(j=0;j<len;j++){           
                if((int)*(*(a+i)+j)==97 || (int)*(*(a+i)+j)==101 || (int)*(*(a+i)+j)==105 || (int)*(*(a+i)+j)==111 || (int)*(*(a+i)+j)==117) //checking for vowels in lowercase
                    count=count +1;
                if ((int)*(*(a+i)+j)==65 || (int)*(*(a+i)+j)==69 || (int)*(*(a+i)+j)==73 || (int)*(*(a+i)+j)==79 || (int)*(*(a+i)+j)==85) //checking for vowels in Uppercase
                    count=count+1;
        }
         printf("Vowels in line %d are:%d\n",i+1,count);  //Final print statement


    }

}
