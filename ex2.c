#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    int main(){
        int n,m,p,i,j,z;
        printf("entre la demonsion de A\n");
        scanf("%d%d",&n,&m);
        printf("entre la demonsion de B \n");
        scanf("%d",&p);
        ////////////////////////////////////////////
        float **A=(float**)calloc(n,sizeof(float*));
        if(A==NULL){
            printf("memoire echec!!!");
            exit(0);
        }else{
            for(i=0;i<n;++i){
                A[i]=(float*)calloc(m,sizeof(float));
                if (A[i]==NULL)
                {
                    printf("memoire echec!!!");
                    exit(0);
                }

            }
        }
        //////////////////////////////////////////////
        float **B=(float**)calloc(m,sizeof(float*));
        if(B==NULL){
            printf("memoire echec!!!");
            exit(0);
        }else{
            for(i=0;i<m;++i){
                B[i]=(float*)calloc(p,sizeof(float));
                if (B[i]==NULL)
                {
                    printf("memoire echec!!!");
                    exit(0);
                }

            }
        }
        /////////////////////////////////////////////
        float **C=(float**)calloc(n,sizeof(float*));
        if(C==NULL){
            printf("memoire echec!!!");
            exit(0);
        }else{
            for(i=0;i<n;++i){
                C[i]=(float*)calloc(p,sizeof(float));
                if (C[i]==NULL)
                {
                    printf("memoire echec!!!");
                    exit(0);
                }

            }
        }
        /////////////////////////////////////////////////
        printf("lecture de A \n");
        for(i=0;i<n;++i){
            for(j=0;j<m;j++){
                printf("A[%d][%d]=\n",i,j);
                scanf("%f",A[i]+j);
            }
                printf("\n");
        }
        ////////////////////////////////////////////////////
        printf("lecture de  B \n");
        for(i=0;i<m;++i){
            for(j=0;j<p;j++){
                printf("B[%d][%d]=\n",i,j);
                scanf("%f",B[i]+j);
            }
                printf("\n");
        }
        ///////////////calcule////////////////////////////////
        for(i=0;i<n;++i){
            for(j=0;j<p;j++){
                float s=0;
                for(z=0;z<m;++z){
                    s+=A[i][z]*B[z][j];
                }
                C[i][j]=s;

            }
        }
        /////////////////////////////////////////////////////
        printf("affichage  de  B \n");
        for(i=0;i<n;++i){
            for(j=0;j<p;j++){
                printf("C[%d][%d]=%.0f\t",i,j,*(C[i]+j));
            }
                printf("\n");
        }

        return 0;

    }
