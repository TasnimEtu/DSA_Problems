#include<stdio.h>
#include<string.h>
int main(){
char s1[20]="hello";
printf("%s",s1);
int i , l=0;
for(i=0;s1[i];i++)
    l++;
printf("%d",l);
char s2[]=" there";
i=0;
int j=0;
while (s1[i]) i++;
while(s2[j]) s1[i++]=s2[j++];
s1[i]='\0';
printf("%s",s1);

}
#include<stdio.h>
int main(){
char s1[20]="hello";
int i,l=0;
for(i=0;s1[i]!='\0';i++)
    l++;
for(i=l-1;i>=0;i--)
    printf("%c",s1[i]);


}
#include<stdio.h>
int main(){

char ch;
printf("Enter a character : ");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U')
printf("vowel");
else
    printf("consonant");

}
#include<stdio.h>
int main(){
    char s[50];
    int i, l=0, flag=1;

    printf("Enter a word: ");
    scanf("%s", s);

    // find length
    for(i=0; s[i]!='\0'; i++)
        l++;

    // check palindrome
    for(i=0; i<l/2; i++){
        if(s[i] != s[l-1-i]){
            flag = 0;
            break;
        }
    }

    if(flag==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
