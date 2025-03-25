

/*
Номер 1

#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    for (int i = 1; i <= 10; i++) {
        cout << i << "\n";
        n += i;
        cout << n << "\n";
        
    }
    



}*/


/* 
Номер 2

#include <iostream>
using namespace std;

int main()
{
    float C = 0;
    float F;
    for (float i = 0; i <= 40; i++){
        
        
        F = (i * 9 / 5) + 32;
        cout << i << "C" <<"="<<F<<"F"<<"\n";

    }


}*/

/* 
Номер 3

#include <iostream>
using namespace std;

int main()
{
    int h = 10;
    int w = 10;
    cout << "  ";
    for (int i = 1; i <= w; i++) {
        cout << i<<" ";
    }
    cout << "\n";
    

    for (int i=1; i <= w; i++) {
        cout << i << "|";
        for (int j = 1; j <= h; j++) {
            cout << i * j<<" ";
        }
        cout << "\n";
    }
   

}*/

/*
Number 4

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 20; i++) {
        for (int j = 0; j < 20 - i; j++) {
            cout << " ";

        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
     


}*/


/* 
Number 5

#include <iostream>

#include<ctime>
using namespace std;

int main()
{
    float plus = 0;
    float minus = 0;
    float nol = 0;
    float par = 0;
    float nepar = 0;
    int min = -100;
    int max = 100;
    srand(time(0));


    for (int i = 0; i <100; i++) {
        int num = rand() % (max - min + 1) + min;
        cout << num << " ";
        
        if (num > 0)
            plus++;
        else if (num < 0)
            minus++;
        else
            nol++;

        if (num % 2 == 0)
            par++;
        else
            nepar++;

    }

    cout << "Plus= " << (plus / 100) * 100 << "%";
    cout << "Minus= " << (minus / 100) * 100 << "%";
    cout << "Nol= " << (nol / 100) * 100 << "%";
    cout << "Par= " << (par / 100) * 100 << "%";
    cout << "Niepar=" << (nepar / 100) * 100 << "%";

    return 0;
}*/

/*#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    int a;
    cout << "Write number between 0 and 1000 ";
    cin >> a;
    srand(time(0));
    int min = 0;
    int max = 1000;
    for (int i = 1; i <= 1; i++) {
        int num = rand() % (max - min + 1)+ min;
        cout <<"It is " << num << "?" << "\n";

        if (num == a)
            cout << "Yes, you win!!!"<<"\n";
        else
            cout << "No,  You have 5 chans." << "\n";
        for (int i = 1; i <= 1; i++) {
            int num = rand() % (max - min + 1) + min;
            cout << "It is " << num << "?" << "\n";

            if (num == a)
                cout << "Yes, you win!!!" << "\n";
            else
                cout << "No,  You have 4 chans." << "\n";
        }
        for (int i = 1; i <= 1; i++) {
            int num = rand() % (max - min + 1) + min;
            cout << "It is " << num << "?" << "\n";

            if (num == a)
                cout << "Yes, you win!!!" << "\n";
            else
                cout << "No,  You have 3 chans." << "\n";
        }
        for (int i = 1; i <= 1; i++) {
            int num = rand() % (max - min + 1) + min;
            cout << "It is " << num << "?" << "\n";

            if (num == a)
                cout << "Yes, you win!!!" << "\n";
            else
                cout << "No,  You have 2 chans." << "\n";
        }
        for (int i = 1; i <= 1; i++) {
            int num = rand() % (max - min + 1) + min;
            cout << "It is " << num << "?" << "\n";

            if (num == a)
                cout << "Yes, you win!!!" << "\n";
            else
                cout << "No,  You have 1 chans." << "\n";
        }

        for (int i = 1; i <= 1; i++) {
            int num = rand() % (max - min + 1) + min;
            cout << "It is " << num << "?" << "\n";

            if (num == a)
                cout << "Yes, you win!!!" << "\n";
            else
                cout << "No, you are loser" << "\n";
        }

        
    

    }

}*/


/*

Number 6

#include <iostream>

using namespace std;

int main()
{
    int stupendia = 2500;
    int prozywanie = 4000;
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        prozywanie = (prozywanie * 0.05) + prozywanie;
        sum += prozywanie;
        cout<< " " << prozywanie<<"\n";
        
    }
    cout << sum<<"\n";

    int sum_of_stupendium = stupendia * 10;
    cout << sum_of_stupendium<<"\n";

    int groshi_batki = sum - sum_of_stupendium;
    cout << "You can speak with parents, to get "<<groshi_batki<<" grivnas";
     
    
    


}*/

#include <iostream>

using namespace std;

int main()
{
    int width = 10;
    int height = 10;

    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) 
        {
            if (x == 0 || y == 0 || x == width - 1 || y == height - 1 || x == y || x + y == width - 1) {
                cout << "@";
            }
            else {
                cout << " ";
            }

            
        }
        cout << "\n";

        
     
    }
    




