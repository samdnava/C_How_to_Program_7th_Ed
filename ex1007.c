#include <stdio.h>
#include <time.h>

#define CARDS 52
#define FACES 13

struct bitCard {
    unsigned int face : 4;
    unsigned int suit : 2;
    unsigned int color : 1;
};

typedef struct bitCard Card;

void fillDeck(Card *const wDeck);
void shuffle(Card *const wDeck);
void deal(const Card *const wDeck);

int main(void) {

    Card deck[CARDS];

    srand(time(NULL));

    fillDeck(deck);
    shuffle(deck);
    deal(deck);

    return 0;
}

void fillDeck(Card *const wDeck) {
    for (int i = 0; i < CARDS; ++i) {
        wDeck[i].face = i % (CARDS / 4);
        wDeck[i].suit = i / (CARDS / 4);
        wDeck[i].color = i / (CARDS / 2);
    }
}
void shuffle(Card *const wDeck) {
    size_t random;
    Card temp;

    for (size_t i = 0; i < CARDS; i++) {
        random = rand() % CARDS;
        temp = wDeck[i];
        wDeck[i] = wDeck[random];
        wDeck[random] = temp;
    }
}
void deal(const Card *const wDeck) {
    size_t k1, k2;
    const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *color[] = {"red", "black"};

    for (k1 = 0, k2 = k1 + 26; k1 < CARDS / 2; ++k1, ++k2) {
        printf("%8s of %s %-12s ", face[wDeck[k1].face], color[wDeck[k1].color], suit[wDeck[k1].suit]);
        printf("%8s of %s %-12s \n", face[wDeck[k2].face], color[wDeck[k2].color], suit[wDeck[k2].suit]);
    }
}