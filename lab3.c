#include<stdio.h>
#define ms 5
int top=-1,flag=0,s[ms];
void push();
void pop();
void display();
void pali();
void main()
{
    int ch;
    do
    {
    printf("____MENU______\n1.PUSH\n2.POP\n3.DISPLAY\n4.PALINDROME\n5.EXIT!!\n\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4:pali();
        break;
        case 5:exit(0);
        default : printf("!!!!!!INVALID INPUT !!!!!!1");

    }
    }while(ch>=1&&ch<=5);
}
void push()
{
    int n;
    if (top == (ms-1))
        printf("\nstack overflow");
    else
    {
      printf("\nEnter the element to be inserted: ");
        scanf("%d",&n);
        top++;
        s[top]=n;
    }

}
void pop()
{
    int n;
    if (top==-1)
    printf("\nstack under flow");
    else
    {
     n=s[top];
     s[top--];
    printf("\nremoverd elements is %d",n);
    }
}
void display()
{
    int i;
    if (top == -1)
        printf("stack under flow");
    else
    {
        printf("Elements of the stack are: \n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    }
}
void pali()
{
    int i,j;
    if (top ==-1 )
        printf("stack under flow");
    else
    {
       for (i=0,j=top;i<=((j/2)+1);i++,j--)
    {
        if(s[i]==s[j])
            continue;
        else
            flag =1;
            break;
    }
    if (flag == 1)
        printf("\nnot a palindrome");
    else
        printf("palindrome");
    }


}
