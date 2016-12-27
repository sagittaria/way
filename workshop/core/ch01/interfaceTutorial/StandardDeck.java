package interfaceTutorial;

import java.util.*;
import java.util.stream.*;

public class StandardDeck implements Deck {
    
    private List<Card> entireDeck;
    
    public StandardDeck() {
        this.entireDeck = new ArrayList<>();
        for (Card.Suit s : Card.Suit.values()) {
            for (Card.Rank r : Card.Rank.values()) {
               this.entireDeck.add(new PlayingCard(r, s));
            }
        }
    }
    
    public void sort() {//默认排序
        Collections.sort(entireDeck);
    }
    
    public void sort(Comparator<Card> c) {//另传入比较器Comparator的排序
        Collections.sort(entireDeck, c);
    }    

    public void shuffle() {//打乱
        Collections.shuffle(entireDeck);
    }
    
    
    public String deckToString() {
        return this.entireDeck
            .stream()
            .map(Card::toString)
            .collect(Collectors.joining("\n"));
    }
    
    public static void main(String... args) {
        StandardDeck myDeck = new StandardDeck();
        System.out.println("Creating deck:");
        myDeck.sort();
        System.out.println("Sorted deck");
        System.out.println(myDeck.deckToString());
        myDeck.shuffle();
        myDeck.sort(new SortByRankThenSuit());
        System.out.println("Sorted by rank, then by suit");
        System.out.println(myDeck.deckToString());        
        myDeck.shuffle();
        myDeck.sort(
            Comparator.comparing(Card::getRank)
                .thenComparing(Comparator.comparing(Card::getSuit)));
        System.out.println("Sorted by rank, then by suit " +
            "with static and default methods");
        System.out.println(myDeck.deckToString());        
        myDeck.sort(
            Comparator.comparing(Card::getRank)
                .reversed()
                .thenComparing(Comparator.comparing(Card::getSuit)));
        System.out.println("Sorted by rank reversed, then by suit " +
            "with static and default methods");
        System.out.println(myDeck.deckToString());
    }
}