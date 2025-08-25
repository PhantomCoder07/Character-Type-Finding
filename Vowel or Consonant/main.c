// if-else
#include <stdio.h>
int main()
{
    char ch;
    printf ("Enter an alphabet: ");
    scanf ("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf ("Alphabet '%c' is Vowel\n",ch);
    }
    else
        printf ("Alphabet '%c' is Consonant\n",ch);
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    char ch;
    printf ("Enter an alphabet: ");
    scanf ("%c",&ch);
    (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')?(printf ("Alphabet '%c' is Vowel\n",ch)):(printf ("Alphabet '%c' is Consonant\n",ch));
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    char ch;
    printf ("Enter an alphabet: ");
    scanf ("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf ("The given alphabet '%c' is Vowel\n",ch);
        break;
    default:
        printf ("The given alphabet '%c' is Consonant\n",ch);
    }
    return 0;
}
// Function
#include <stdio.h>
int vc (char c)
{
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    char ch;
    printf ("Enter an alphabet: ");
    scanf ("%c",&ch);
    if (vc(ch))
        printf ("Alphabet '%c' is Vowel\n",ch);
    else
        printf ("Alphabet '%c' is Consonant\n",ch);
    return 0;
}
