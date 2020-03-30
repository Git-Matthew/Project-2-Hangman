#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Hangman//
int main(int argc, char** argv)
{
    //Declare Variables//
    int number_of_letters = strlen(argv[1]);
    char hiddenword[number_of_letters];
    int lives;
    char letter;
    char *p;

    //Counters//
    int attempts = 0;
    int i;
    int j;
    int n;

    //Letter Checkers//
    int letter_a = 0;
    int letter_b = 0;
    int letter_c = 0;
    int letter_d = 0;
    int letter_e = 0;
    int letter_f = 0;
    int letter_g = 0;
    int letter_h = 0;
    int letter_i = 0;
    int letter_j = 0;
    int letter_k = 0;
    int letter_l = 0;
    int letter_m = 0;
    int letter_n = 0;
    int letter_o = 0;
    int letter_p = 0;
    int letter_q = 0;
    int letter_r = 0;
    int letter_s = 0;
    int letter_t = 0;
    int letter_u = 0;
    int letter_v = 0;
    int letter_w = 0;
    int letter_x = 0;
    int letter_y = 0;
    int letter_z = 0;

    //Print Instructions//
    printf("\n Guess the word by typing a letter. \n");
    printf("\n List of words: \n");
    printf("\n sponge, starfish, squid, crab, pineapple. \n");
    printf("\n NOTE: Words are case sensitive. \n");
    
    //Create The Hidden Word
    for(j=0;j<=(number_of_letters-1);j++)
    {
        hiddenword[j] = '*';
    }
    printf("\n Word to guess: %s \n",hiddenword);
    
    //Game For-Loop//
    for(lives=5;lives>0;attempts++)
    {
        //Special Counter//
        n = 0;

        //Ask For A Letter//
        scanf(" %c", &letter);

        //Check For Repeated Letters//
        switch(letter)
        {
        case 'a':
            letter_a++;
            if(letter_a>1)
            {
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            lives--;
            }
            break;
        case 'b':
            letter_b++;
            if(letter_b>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'c':
            letter_c++;
            if(letter_c>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'd':
            letter_d++;
            if(letter_d>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'e':
            letter_e++;
            if(letter_e>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'f':
            letter_f++;
            if(letter_f>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'g':
            letter_g++;
            if(letter_g>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'h':
            letter_h++;
            if(letter_h>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'i':
            letter_i++;
            if(letter_i>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'j':
            letter_j++;
            if(letter_j>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'k':
            letter_k++;
            if(letter_k>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'l':
            letter_l++;
            if(letter_l>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'm':
            letter_m++;
            if(letter_m>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'n':
            letter_n++;
            if(letter_n>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'o':
            letter_o++;
            if(letter_o>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'p':
            letter_p++;
            if(letter_p>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'q':
            letter_q++;
            if(letter_q>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'r':
            letter_r++;
            if(letter_r>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 's':
            letter_s++;
            if(letter_s>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 't':
            letter_t++;
            if(letter_t>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'u':
            letter_u++;
            if(letter_u>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'v':
            letter_v++;
            if(letter_v>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'w':
            letter_w++;
            if(letter_w>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'x':
            letter_x++;
            if(letter_x>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'y':
            letter_y++;
            if(letter_y>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        case 'z':
            letter_z++;
            if(letter_z>1)
            {
            lives--;
            printf("\n You repeated a letter! -1 LifePoint. \n");
            printf("\n You have %d LifePoints left. \n",lives);
            }
            break;
        }

        //Check each letter of the word to see if it matches//
        for(i=0;i<number_of_letters;i++)
        {
            if(argv[1][i] == letter)
            {
                hiddenword[i] = letter;
                p = strchr(hiddenword,'*');
                n++;
            }
        }

        //Congratulate upon guessing a letter correctly//
        if(n>0)
        {
        if(p == NULL)
        {
            printf("\n Congratulations, you won!");
            printf("\n The word was: \"%s\"\n",argv[1]);
            return(0);
        }
        }
        else
        {
        lives--;
        printf("\n Incorrect letter! -1 LifePoint. \n Remember that the words are case sensitive. \n");
        printf("\n You have %d LifePoints left. \n",lives);
        }
        printf("\n Word to guess: %s \n",hiddenword);
    }
    return(0);
}
