#include<stdio.h> 

int main() { 
    int col ; 
    int row ; 

    for(row = 0 ; row < 5 ; row ++) {  //rows
    
        for(col = 0 ; col < 5 ; col ++) {  //col
            if(col>=row) {
            printf("* \t"); 
            } 
            else { 
            printf(" ");      
            }       
        } 
        printf("\n");
    }

    return 0;
}

/*

1.print below pattern

* * * *              00 01 02 03
* * * *              10 11 12 13
* * * *              20 21 22 23
* * * *              30 31 32 33


2.
                       rc 
*                      00
* *                    10  11  
* * *                  20  21  22
* * * *                30  31  32  33
* * * * *              40  41  42  43  44
                       row == col 
                       row >col 
                        
                       row >=col    

3.

*                     00
  *                      11 
    *                       22
      *                        33
        *                         44  


4.
                            rc

* * * * *                   00 01 02 03 04
* * * *                     10 11 13 14 
* * *                       20 21 22 
* *                         30 31
*                           40

                            row <= col


00

11  11 

22  22  22

33  33  33  33 





*/


