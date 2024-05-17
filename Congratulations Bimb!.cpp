#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int lli;
using namespace std;


int main() {
    lli t;
    scanf("%lld", &t);
    while (t--){
        lli q;
        scanf("%lld", &q);
        printf("CONGRATULATIONS BIMB!\n");
        if (q==1){
            printf("1ST ");
        }
        if (q==2){
            printf("2ND ");
        }
        if (q==3){
            printf("3RD ");
        }
        if (q==4) {
            printf("4TH ");
        }
        printf ("QUARTER GRADES\n");
        lli gra,req;
        scanf("%lld", &req);
        for (lli i=0; i<12; i++){
            scanf("%lld", &gra);
            if (gra>=req){
                if (i==0){
                    printf("Art: ");
                }
                if (i==1){
                    printf("English: ");
                }
                if (i==2){
                    printf("Handwriting: ");
                }
                if (i==3){
                    printf("History: ");
                }
                if (i==4){
                    printf("Math: ");
                }
                if (i==5){
                    printf("P.E.: ");
                }
                if (i==6){
                    printf("Phonics: ");
                }
                if (i==7){
                    printf("Reading: ");
                }
                if (i==8){
                    printf("Religion: ");
                }
                if (i==9){
                    printf("Science/Health: ");
                }
                if (i==10){
                    printf("Spelling: ");
                }
                if (i==11){
                    printf("Vocabulary: ");
                }
                if (gra>=97){
                    printf("A+");
                    printf("\n");
                }
                if (gra<=96 && gra>=93){
                     printf("A");
                     printf("\n");
                }
               if (gra<=92 && gra>=90){
                    printf("A-");
                    printf("\n");
                }
               if (gra<=89 && gra>=87){
                    printf("B+");
                    printf("\n");
               }
               if (gra<=86 && gra>=83){
                    printf("B");
                    printf("\n");
               }
               if (gra<=82 && gra>=80){
                    printf("B-");
                    printf("\n");
               }
               if (gra<=79 && gra>=77){
                    printf("C+");
                    printf("\n");
               }
               if (gra<=76 && gra>=73){
                    printf("C");
                    printf("\n");
               }
               if (gra<=72 && gra>=70){
                    printf("C-");
                    printf("\n");
               }
               if (gra<=69 && gra>=67){
                    printf("D+");
                    printf("\n");
               }
               if (gra<=66 && gra>=63){
                    printf("D");
                    printf("\n");
               }
               if (gra<=62 && gra>=60){
                    printf("D-");
                    printf("\n");
               }
               if (gra<=59){
                    printf("F");
                    printf("\n");
               }
            }
        }
    }
    return 0;
}

