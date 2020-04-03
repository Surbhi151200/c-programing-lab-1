int main()
{
    int num,i;
    printf("Enter a number  :   ");
    scanf("%d",&num);
    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("\n\t NOT A PRIME NUMBER");
            break;
        }
        i++;
    }
    if(i==num)
    printf("\n\t PRIME NUMBER");
    return 0;
}

