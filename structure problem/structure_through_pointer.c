// Write a program to access the structure member through pointer ;

typedef struct student
{
    char name[20];
    int roll_no;
    int age;
}student;
 student add(student *n);
int main()
{
    student st;
    student *p=&st;
    add(p);
   Sleep(400);
  system("cls");
  printf("name = %s \n",p->name);
  Sleep(400);
  printf("roll no = %d \n",p->roll_no);
  Sleep(400);
  printf("age = %d ",p->age);
}
student add(student *n)
{
    printf("Enter the name : ");
    scanf("%s",&n->name);
    printf("enter the roll no : ");
    scanf("%d",&n->roll_no);
    printf("enter the age : ");
    scanf("%d",&n->age);

}
