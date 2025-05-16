#include <stdio.h>
# include <string.h>
struct bookinfo{
char name[20];
float price;
char author[20];
};
int main(){
struct bookinfo b[8];
int i,k,d,u,ch;
for(i=0;i<3;i++){
printf("Enter the book information\n");
printf("enter the name of book:\n");
scanf("%s",b[i].name);
printf("enter the price\n");
scanf("%f",&b[i].price);
printf("enter the author\n");
scanf("%s",b[i].author);}
for(i=0;i<3;i++){
printf("student information\n");
printf("name of book :%s\n",b[i].name);
printf("price of book is:%f\n",b[i].price);
printf("author of book is:%s\n",b[i].author);}
do{
printf("1.insertion\n 2.deletion\n 3.updating\n 4.exit\n");
printf("enter your choice to perform operation ");
scanf("%d",&ch);

switch(ch)
{
    case 1:printf(" insertion of element \n");
    printf ("positin at which you want insert the element\n");
    scanf("%d",&k);
    printf ("enter information at %d Position\n",k);
    for(i=2;i>=k;i--){
 strcpy(b[i+1].name,b[i].name);
        b[i+1].price=b[i].price;
strcpy(b[i+1].author,b[i].author);}
    printf("enter the name of book:\n");
scanf("%s",b[k].name);
printf("enter the price\n");
scanf("%f",&b[k].price);
printf("enter the author\n");
scanf("%s",b[k].author);
for(i=0;i<4;i++){
   printf("name of book :%s\n",b[i].name);
printf("price of book is:%f\n",b[i].price);
printf("author of book is:%s\n",b[i].author);}
    break;
    case 2: printf(" deletion of element");
       printf ("position at which you want delete  the element\n");
    scanf("%d",&d);
    printf ("enter information at %d Position\n",d);
for(i=d;i<=3;i++){
 strcpy(b[i-1].name,b[i].name);
        b[i-1].price=b[i].price;
strcpy(b[i-1].author,b[i].author);}
    printf("the modified data is \n");
for(i=0;i<2;i++){
   printf("name of book :%s\n",b[i].name);
printf("price of book is:%f\n",b[i].price);
printf("author of book is:%s\n",b[i].author);}
    break;
    case 3: printf ("updating of eelement");
    printf(" updating  of element \n");
    printf ("positin at which you want update the element\n");
    scanf("%d",&u);
    printf ("enter information at %d Position\n",u);
    for(i=2;i>u;i--){
 strcpy(b[i].name,b[i].name);
        b[i].price=b[i].price;
strcpy(b[i].author,b[i].author);}
    printf("enter the name of book:\n");
scanf("%s",b[u].name);
printf("enter the price\n");
scanf("%f",&b[u].price);
printf("enter the author\n");
scanf("%s",b[u].author);
for(i=0;i<3;i++){
   printf("name of book:%s\n",b[i].name);
printf("price of book is:%f\n",b[i].price);
printf("author of book is:%s\n",b[i].author);}
    break;
    case 4:
    printf("Exiting program...\n");
    break;
    default:printf("wrong choice");
}
}while(ch!=4);
return 0;
    
}
