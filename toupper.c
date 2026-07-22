#include <cs50.h>
#include <stdio.h>

int str_len(string text);

int main(void)
{
    string text = get_string("Please enter some text to capitalie: ");



    for (int index = 0; index < str_len(text); index++)
    // This is actually very inefficient, as the compiler checks whether index < str_len(text) everytime. This means the str_len
    // function is called on everytime the loop runs. Since str_len(text) is a constant eitherwya, it is more efficient to
    // store it in a variable, so as to not use the str_len function everytime.
    {
        if (text[index] >= 97 && text[index] <= 122)
        {
            text[index] = text[index] - 32;
        }
    }

    printf("The capitalized text is %s\n", text);



}


int str_len(string text)
{
    int i = 0;
    while (text[i] != '\0')
    {
        i++;
    }
    return i;
}

