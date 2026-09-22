include <iostream>
using namespace std;

int main() {
    char text[50], pat[20];
    int i, j, c, n, m, count=0;

    cout<<"enter text: ";
    cin>>text;       // single word only
    cout<<"enter pattern: ";
    cin>>pat;

    // find length of text
    for(n=0;text[n]!='\0';n++);
    // find length of pattern
    for(m=0;pat[m]!='\0';m++);

    // check pattern
    for(i=0;i<=n-m;i++) {
        c=0;
        for(j=0;j<m;j++) {
            if(text[i+j]==pat[j]) c++;
        }
        if(c==m) {
            cout<<"match found at index "<<i<<"\n";
            count++;
        }
    }

    if(count>0)
        cout<<"total matches: "<<count;
    else
        cout<<"not found";
}
 #include <iostream>
using namespace std;

int main() {
    char str[50], sub[50];
    int m, n, i, j=0;
    cout<<"enter string: ";
    cin>>str;
    cout<<"enter start position: ";
    cin>>m;
    cout<<"enter number of chars: ";
    cin>>n;

    i = m;
    while(str[i] != '\0' && n > 0) {
        sub[j] = str[i];
        i++; j++; n--;
    }
    sub[j] = '\0';

    cout<<"substring: "<<sub;
}
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, temp;
    cout<<"enter size: ";
    cin>>n;
    int a[n];
    cout<<"enter elements: ";
    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n-1;i++) {
        for(j=0;j<n-1-i;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"sorted: ";
    for(i=0;i<n;i++) cout<<a[i]<<" ";
}


























