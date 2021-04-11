#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 50
typedef struct iris {
    double sepal_length;
    double sepal_width;
    double petal_length;
    double petal_width;
    char class[20];
} Iris;
void printIris(Iris iris){
    printf("%.2f %.2f %.2f %.2f %s",iris.sepal_length,iris.sepal_width,iris.petal_length,iris.petal_width,iris.class);
}

    int main(void){
        FILE *fp;
        char line[MAX];
        char fname[] = "iris.data.txt";
        Iris list[150];
        int num = 0;
           
        fp = fopen(fname, "r");
        if(fp == NULL) {
            printf("%s file not open!\n", fname);
            return -1;
        } else {
            printf("%s file opened!\n", fname);
        }

        while((fgets(line, MAX, fp)) != NULL){
            //printf("%s¥n",line);
            Iris iris;
            iris.sepal_length = atof(strtok(line, ",\n"));
            iris.sepal_width = atof(strtok(NULL, ",\n"));
            iris.petal_length = atof(strtok(NULL, ",\n"));
            iris.petal_width = atof(strtok(NULL, ",\n"));
            strcpy(iris.class,strtok(NULL, ",\n"));
            //printIris(iris);
            list[num] = iris;
            num++;
        }
        fclose(fp);
        printf("%s file closed!\n", fname);
        
        double sum_setosa_sepal_length=0;
        double sum_sepal_length_length=0;
        double setosa_num=0;
        double length_num=0;
        for(int i=0;i<150; i++){
            //setosaなの?
            if(strcmp(list[i].class,"Iris-setosa")==0){
                sum_setosa_sepal_length+=list[i].sepal_length;
                setosa_num++;
            }
            //sepal_lengthたす
        }
        double avg_setosa_sepal_length=sum_setosa_sepal_length/setosa_num;
        printf("avg_setosa_sepal_legth:%f\n",avg_setosa_sepal_length);
        
        for(int i=0;i<150; i++){
        //sepal_lengthなの？
        if(strcmp(list[i].class,"sepal_length")==0){
                sum_sepal_length_length+=list[i].sepal_length;
                length_num++;
            }
            //sepal_lengthたす
        }
        double avg_setosa_sepal_length=sum_setosa_sepal_length/setosa_num;
        printf("avg_setosa_sepal_legth:%f\n",avg_setosa_sepal_length);
        //標準偏差を求める処理
        double tmp=0;
        for(int i=0;i<150; i++){
        //setosaなの?
        if(strcmp(list[i].class,"Iris-setosa")==0){
            tmp=pow(avg_setosa_sepal_length-list[i].sepal_length,2);//avgからどれだけ離れているの？
        }
    }
        double sd_setosa_sepal_length = sqrt(tmp/setosa_num);
        printf("sd_setosa_sepal_length:%f\n",sd_setosa_sepal_length);

    return 0;
    }
