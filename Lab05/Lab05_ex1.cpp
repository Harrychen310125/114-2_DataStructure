#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

// 表示單張撲克牌的類別
class Card {
public:
    int s[100];
    string colors; //儲存撲克牌的花色
    string rank;   //儲存撲克牌的數值

    //建立 constructor 來初始化物件
    Card(string s, string r) : colors(s), rank(r) {} 
    
    //顯示撲克牌的資訊
    void display() const { 
        cout << rank << " of " << colors << endl;
    }
};

// 實作 Stack
class Stack {
private:
    vector<Card> stack; //表示 stack 是一個能存放 Card 類別物件的 vector

public:
    void push(const Card& card) {
        stack.push_back(card);
    }
    
    Card pop() {
        Card topCard = stack.back();
        stack.pop_back();
        return topCard;
    }
    
    bool isEmpty() const {
        return stack.empty();
    }
};

// 代表一副撲克牌的類別
class Deck {
private:
    vector<Card> cards; // 存放未洗牌的撲克牌
    Stack shuffledDeck; // 存放洗過的牌,用實作的 stack 來管理

public:
    //建立 constructor 來初始化物件
    Deck() { 
        string colors[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" }; 
        
        //利用迴圈將 52 張牌加入 cards 這個 vector 裡面
        for (int i = 0; i < 4; i++) { 
            for (int j = 0; j < 13; j++) { 
                cards.push_back(Card(colors[i], ranks[j]));
            }
        }
    }

    //洗牌
    void shuffleDeck() {
        random_device rd;
        mt19937 g(rd());
        shuffle(cards.begin(), cards.end(), g);

        for (int i = 0; i < cards.size(); i++) {
            shuffledDeck.push(cards[i]);
        }
    }

    //發牌
    void drawAllCards() {
        while (!shuffledDeck.isEmpty()) {
            Card c = shuffledDeck.pop();
            c.display();
        }
    }
};

int main() {
    Deck deck; //建立 deck 產生 52 張撲克牌
    deck.shuffleDeck(); //進行洗牌並放入堆疊
    
    cout << "Shuffled deck:" << endl;
    deck.drawAllCards(); //依序取出堆疊內的牌並顯示
    
    return 0;
}