#include "libraries.h"
#include "Book.h"

class AudioBook: public Book
{
private:
    /* data */
    string voiceActor;
public:
    AudioBook(string title, string authorName, string voiceActor);

    void setVoiceActor(string voiceActor);
    string getVoiceActor();

    void printDescription();
};


