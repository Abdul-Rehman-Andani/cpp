#include <iostream>
#include <list>
using namespace std;

class YouTube
{
private:
    int count = 0;
    string Name;
    list<string> Videos = {};

public:
    YouTube(string name)
    {
        Name = name;
    };

    void info()
    {
        cout << "name : " << Name << endl;
        cout << "Subs :" << count << endl;

        for (string title : Videos)
        {
            cout << title << endl;
        }
    }

    void subscribe()
    {
        count++;
    };

    void unSubscribe()
    {
        if (count > 0)
        {
            count--;
        }
    };

    void addVodeo(string title)
    {
        Videos.push_back(title);
    }
};

class Channel : public YouTube {
    public:
    Channel(string name) : YouTube(name) {
        
    }
};

int main()
{

    // YouTube yt("andani");
    // yt.subscribe();
    // yt.subscribe();
    // yt.addVodeo("Coding with C++");
    // yt.info();

    Channel chl = Channel("rehman");
    chl.info();

    return 0;
}