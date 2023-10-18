// Write a program to create your own mixed data type using unions
typedef union
{
    int Int;
    char Char;
    double Double;
}mixtype;
                     // You can create an array of union that will make your task simple
int main()
{
    mixtype data[3];// array of mixtype union
    data[0].Int=4;
    data[1].Char='a';
    data[2].Double=334.33;
    printf("int data = %d\nchar data = '%c'\ndouble data = %f\n\n",data[0].Int,data[1].Char,data[2].Double);
}
