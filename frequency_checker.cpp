#include<iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

struct pos {
    int index;
    pos* next;
};

struct node {
    string data;
    int counter;
    node *next;
    pos *position;
};

int MainIndex = 0;
int totalWord=0;
node* head =  NULL;
//pos *h2 =  NULL;
//int counter = 0;


node* CreateNode(string data){
    node *temp = new node;
    temp->data = data;
    temp->counter = 0;
    temp->next = NULL;
    temp->position = NULL;
    return temp;
}

pos* insertPosition(pos* positionRoot, int indx){

    pos* Ptemp = new pos();
    Ptemp->index = indx;
    Ptemp->next = NULL;
    if(positionRoot == NULL){
        positionRoot=Ptemp;
        return positionRoot;
    }
    else{
        pos *Current  = positionRoot;
        while (Current->next != NULL){
            Current =Current->next;

        }
        Current ->next =Ptemp;
        return positionRoot;

    }


}

void addNodeToTheList(string data){
    node *temp = new node();
    temp->data = data;
    temp->counter = 0;
    temp->next = NULL;
    temp->position = NULL;


    if(head == NULL){
        temp->counter++;
        temp->position = insertPosition(temp->position,++MainIndex);

        head=temp;
        //return head;
    }
    else{

            node* tempHead=head;

        while(tempHead->next!=NULL )
        {


            if((tempHead->data.compare(data) ==0)){
                break;
            }
            tempHead=tempHead->next;
        }

        if((tempHead->data.compare(data) ==0))
        {
            tempHead->counter++;
            tempHead->position= insertPosition(tempHead->position, ++MainIndex);
            return;
        }
        else{

            temp->counter++;
            temp->position= insertPosition(temp->position, ++MainIndex);
            tempHead->next=temp;
        }
    }

}

void printTHE(){
    double freq=0;
    node *something = head;
    while(something != NULL){

        freq = (double) something->counter/totalWord;

        cout<<"Word: "<<something->data <<" - Frequency: "<<freq <<" - Position: ";
        pos* mPos = something->position;

        while(mPos!=NULL)
        {
            cout << mPos->index << " " ;
            mPos=mPos->next;
        }
        cout <<endl;

        something=something->next;

    }
}

int main(void) {
    ifstream file;


    // file.open("input.txt", std::fstream::out);

    string x, y ; 
    cout << "Type the name of your file: "; 
    cin >> x; 
    

    y = x.append(".txt");
    cout << "Opening " << y << endl; 

    file.open(y, std::fstream::out);

    cout << "";

    string s;
    if (file.is_open()) {

        while (file >> s) {

            transform(s.begin(), s.end(), s.begin(), ::tolower);

            int sizes=s.size();
            if(s[sizes-1] == ',' || s[sizes-1] == '.')
            {
                string newWord(&s[0], &s[sizes-1]);
                s=newWord;
            }



            addNodeToTheList(s);


            totalWord++;


        }
        printTHE();


    }
}
