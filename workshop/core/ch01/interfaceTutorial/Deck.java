package interfaceTutorial;

import java.util.*;

public interface Deck {
    void shuffle();
    void sort();
    void sort(Comparator<Card> c);
    String deckToString();
}
