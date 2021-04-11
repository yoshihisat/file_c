#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void){
    //testの点数結果配列
    float *p1;
    float *X1;
    int i=1,n=0;
    double total=0.0,avg,deviation,dispersion,total_d,standard_dev,normal_dis,X2,exp1,fx,sekia1,sekia2;
    printf("テスト人数を入力してください");
    scanf("%d",&n);
    p1=(float*)malloc(n*sizeof(float));
    X1=(float*)malloc(n*sizeof(float));
    
    if (p1 == NULL){
        printf("No enough memory.\n");
        exit(1);
    }
    printf("%d人分testの点数を入力してください \n",n);
    for (int i=1; i <= n; i++) {
        scanf("%f",&p1[i]);
        if (p1[i]>100||p1[i]<0) {
            printf("0〜100点までです\n");
            exit(1);
        
        }else{
            printf("%d人目は%f点\n",i,p1[i]);
            total += p1[i];
            avg = total/i;
            
        }
    }
for(int i=1; i<=n;i++){
     X1[i]==1/2*(p1[i]-avg/(sqrt(2)*standard_dev));
    printf("%f\n",X1[i]);
}printf("平均点は%.2f\n",avg);
printf("標準偏差は%.2f\n",standard_dev);
for(int i=1; i<=n;i++){
if (p1[i]>51.0||p1[i]<49.0) {
    printf("テストの点数に入力された数字が49点以上かつ\n");
    printf("51点以下なので50点の確率は0パーセントです\n");
    exit(1);
    
}else{
    printf("正規分布から求められた50点の生徒がいる可能性は\n");
    if (fx>100) {
    printf("正規分布は100パーセント\n");
    exit(1);
    }
    printf("%.2fパーセントです\n",fx);
    
}
free(p1);
    free(X1);
        return 0;
    }
}
