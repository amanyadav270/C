#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//Medium Words
char *medium_words[] = {
        "apple", "book","elephant", "grape", "house", "juice",
        "kite", "lemon", "moon", "night", "orange", "pencil", "queen", "river", "star", "tree",
        "umbrella", "village", "water", "yellow", "zebra", "ant", "ball", "chair", "dance", "earth",
        "flower", "garden", "honey", "idea", "jungle", "key", "lamp", "mountain", "nest", "ocean",
        "paper", "quilt", "rain", "sand", "table", "uncle", "voice", "window", "yard", "zero",
        "bird", "clock", "dream", "egg", "family", "gift", "heart", "island", "jewel", "kite",
        "leaf", "music", "nose", "open", "pizza", "queen", "road", "song", "tiger", "unit",
        "victory", "whale", "xylophone", "year", "zipper", "art", "box", "cloud", "dance", "eye",
        "friend", "globe", "hill", "ink", "jam", "king", "love", "mirror", "nest", "owl",
        "park", "quiet", "rock", "snow", "turtle"
    };

//Hard Words
char *hard_words[] = {
        "ambush", "banter", "cactus", "dainty", "eclipse", "falcon", "gadget", "hurdle", "ignite", "jargon",
        "kitten", "laptop", "mantis", "nebula", "octave", "plasma", "quartz", "rocket", "subtle", "tackle",
        "uplift", "vortex", "waffle", "xenon", "yonder", "zigzag", "anchor", "blurry", "cradle", "deluge",
        "esteem", "funnel", "garnet", "hybrid", "influx", "jumper", "kernel", "lantern", "meteor", "nuance",
        "outset", "petals", "quaint", "ripple", "spruce", "timber", "uplink", "valley", "waddle", "xylem",
        "yonder", "zephyr", "astral", "bunker", "cipher", "doodle", "embark", "frosty", "gravel", "hollow",
        "impact", "jigsaw", "kosher", "lucent", "mellow", "narrow", "oracle", "parlor", "quirky", "rudder",
        "silken", "thrift", "unison", "violet", "wander", "yammer", "zodiac", "archive", "buffer", "climax",
        "dagger", "encore", "fringe", "galaxy", "hurdle", "inward", "jargon", "kepler", "lounge", "mystic",
        "nectar", "opus", "parade", "quasar", "refine", "static"
    };


//Declaration
char *random_word ();
void omitted_word();
void play();

//main function

int main(){
    play();
    return 0;
}

//randomely chooses word
char *random_word (char *words[],int size){
    int i = rand() % size;
    return words[i];
}

//randomely omitte character
void omitted_word(char *word,char *omitt_word, char *omitted_character){
    strcpy(omitt_word,word);
    int word_len = strlen(word);
        int random_index = rand() %word_len;
        omitted_character[0] = word[random_index];
        omitted_character[1] = '\0';
        omitt_word[random_index] = '*';
}

void play(){
    int level,chance = 3;
    char selected_word[30],omitt_word[30], omitted_character[2];

    srand(time(NULL));

    printf("\n\n!!Important!!\nUse only small case characters\n\n");
    printf("\n\n--------------HANGMAN--------------\n\n");
    printf("Choose Level:\n1.Medium\n2.Hard\n");
    scanf("%d",&level);

    //Selecting Random Word from medium or hard choice
    if(level == 1){
        strcpy(selected_word, random_word( medium_words, sizeof(medium_words)/sizeof(medium_words[0])));
    }else if (level == 2){
        strcpy(selected_word, random_word( hard_words, sizeof(hard_words)/sizeof(hard_words[0])));
    }else {
        printf("\nWrong Input.");
        return;
    }
    //calling omitted word function
    omitted_word(selected_word,omitt_word,omitted_character);

    printf("\nLet's Start\n\nYou have 3 Chances to Guess the Word\n\nChances Left = %d\n\n",chance);
    while(chance>0){
        printf("Guess Character: %s\n",omitt_word);
        char guess;
        scanf(" %c",&guess);
        char *result = strchr(omitted_character,guess);
        if (result != NULL){
            printf("\nCorrect Guess!!");
            break;
        }else{
            printf("\nWrong!!! %c is not in the word.\n",guess);
            chance--;
        }
        printf("\nChances Left = %d\n\n",chance);
    }
    if(chance == 0){
        printf("You Lose\n\n!!!Man Hanged!!!");
    }else if(chance>0){
        printf("\n\nYou Win\n\n!!!Man Survived!!!");
    }
}


