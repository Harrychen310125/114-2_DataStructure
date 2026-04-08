#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>    
using namespace std;

//表示單張撲克牌的類別
class Card {
public:
  
   
    
    string colors;//撲克牌的花色 
    string rank;//撲克牌的數值 

    //初始化物件
    Card(string s, string r) : colors(s), rank(r) {} 
    

    void display() const { 
        cout << rank << " of " << colors << endl;
    }
};



class Stack {
private:
    vector<Card> stack;//內部使用空間來存放Card類別物件

public:
    //將一張放到儲存空間頂端
    void push(const Card& card) {
        stack.push_back(card);
    }
    Card pop() {
        Card topCard = stack.back(); //取得最後放入的牌 (堆疊頂端)
        stack.pop_back();//將該張牌移除
        return topCard;//回傳取出的牌
    }
    
    
    bool isEmpty() const {
        return stack.empty();//檢查堆疊是否為空
    }
};

//代表一副撲克牌的類別
class Deck {
private:
    vector<Card> cards;//存放初始狀態(未洗牌)的52張撲克牌
    Stack shuffledDeck;//存放洗過後的牌，使用我們自己實作的 Stack 類別來管理

public:
    //初始化撲克牌
    Deck() { 
        //定義4種花色與13種數字
        string colors[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" }; 
        
        //利用雙重迴圈將52張牌加入cards裡面
        for (int i = 0; i < 4; i++) { 
            for (int j = 0; j < 13; j++) { 
                //每次產生一張新牌，並放入cards陣列的尾端
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
        //當堆疊裡面還有牌的時候，就繼續抽牌
        while (!shuffledDeck.isEmpty()) {
            Card c = shuffledDeck.pop();//從堆疊頂端抽出一張牌
            c.display();//呼叫Card的display()印出牌面資訊
        }
    }
};

int main() {
    Deck deck;//建立deck物件產生52張撲克牌
    deck.shuffleDeck();//進行洗牌
    
    cout << "Shuffled deck:" << endl;
    deck.drawAllCards();//依序從儲存空間中取出(Pop)所有的牌並顯示在畫面上
    
    return 0;
}
