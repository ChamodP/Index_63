#include "AudioBook.h"

// parametarized constructor for audioBook
AudioBook::AudioBook(string title, string authorName, string voiceActor):Book(title, authorName){
    this->voiceActor = voiceActor;
}

// setter for the voiceActor
void AudioBook::setVoiceActor(string authorName){
    this->voiceActor = voiceActor;
}

// getter for the voice actor
string AudioBook::getVoiceActor(){
    return voiceActor;
}

void AudioBook::printDescription(){
    cout<<"Title of the audio book is: "<< this->title <<endl;
    cout<<"Author of the audio book is: "<< this->authorName <<endl;
    cout<<"Voice actor of the audio book is: "<< this->voiceActor <<endl;
}