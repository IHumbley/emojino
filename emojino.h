/*
programmer: Matin Humbley
github: https://github.com/MrHumbley/
lang: C++
*/
#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <string>
#include <fstream> 

using namespace std;

class emojino { 
    private:
        map<string, string> marks{ 
            {"Grinning Face", "\U0001F600"},{"Grinning Face With Big Eyes", "\U0001F603"},{"Grinning Face With Smiling Eyes", "\U0001F604"},{"Beaming Face With Smiling Eyes", "\U0001F601"},{"Grinning Squinting Face", "\U0001F606"},{"Grinning Face With Sweat", "\U0001F605"},{"Rolling On The Floor Laughing", "\U0001F923"},{"Face With Tears Of Joy", "\U0001F602"},{"Slightly Smiling Face", "\U0001F642"},{"Upside-Down Face", "\U0001F643"},{"Winking Face", "\U0001F609"},{"Smiling Face With Smiling Eyes", "\U0001F60A"},{"Smiling Face With Halo", "\U0001F607"},{"Smiling Face With 3 Hearts", "\U0001F970"},{"Smiling Face With Heart-Eyes", "\U0001F60D"},{"Star-Struck", "\U0001F929"},{"Face Blowing A Kiss", "\U0001F618"},{"Kissing Face", "\U0001F617"},{"Kissing Face With Closed Eyes", "\U0001F61A"},{"Kissing Face With Smiling Eyes", "\U0001F619"},{"Face Savoring Food", "\U0001F60B"},{"Face With Tongue", "\U0001F61B"},{"Winking Face With Tongue", "\U0001F61C"},{"Zany Face", "\U0001F92A"},{"Squinting Face With Tongue", "\U0001F61D"},{"Money-Mouth Face", "\U0001F911"},{"Hugging Face", "\U0001F917"},{"Face With Hand Over Mouth", "\U0001F92D"},{"Shushing Face", "\U0001F92B"},{"Thinking Face", "\U0001F914"},{"Zipper-Mouth Face", "\U0001F910"},{"Face With Raised Eyebrow", "\U0001F928"},{"Neutral Face", "\U0001F610"},{"Expressionless Face", "\U0001F611"},{"Face Without Mouth", "\U0001F636"},{"Smirking Face", "\U0001F60F"},{"Unamused Face", "\U0001F612"},{"Face With Rolling Eyes", "\U0001F644"},{"Grimacing Face", "\U0001F62C"},{"Lying Face", "\U0001F925"},{"Relieved Face", "\U0001F60C"},{"Pensive Face", "\U0001F614"},{"Sleepy Face", "\U0001F62A"},{"Drooling Face", "\U0001F924"},{"Sleeping Face", "\U0001F634"},{"Face With Medical Mask", "\U0001F637"},{"Face With Thermometer", "\U0001F912"},{"Face With Head-Bandage", "\U0001F915"},{"Nauseated Face", "\U0001F922"},{"Face Vomiting", "\U0001F92E"},{"Sneezing Face", "\U0001F927"},{"Hot Face", "\U0001F975"},{"Cold Face", "\U0001F976"},{"Woozy Face", "\U0001F974"},{"Dizzy Face", "\U0001F635"},{"Exploding Head", "\U0001F92F"},{"Cowboy Hat Face", "\U0001F920"},{"Partying Face", "\U0001F973"},{"Smiling Face With Sunglasses", "\U0001F60E"},{"Nerd Face", "\U0001F913"},{"Face With Monocle", "\U0001F9D0"},{"Confused Face", "\U0001F615"},{"Worried Face", "\U0001F61F"},{"Slightly Frowning Face", "\U0001F641"},{"Face With Open Mouth", "\U0001F62E"},{"Hushed Face", "\U0001F62F"},{"Astonished Face", "\U0001F632"},{"Flushed Face", "\U0001F633"},{"Pleading Face", "\U0001F97A"},{"Frowning Face With Open Mouth", "\U0001F626"},{"Anguished Face", "\U0001F627"},{"Fearful Face", "\U0001F628"},{"Anxious Face With Sweat", "\U0001F630"},{"Sad But Relieved Face", "\U0001F625"},{"Crying Face", "\U0001F622"},{"Loudly Crying Face", "\U0001F62D"},{"Face Screaming In Fear", "\U0001F631"},{"Confounded Face", "\U0001F616"},{"Persevering Face", "\U0001F623"},{"Disappointed Face", "\U0001F61E"},{"Downcast Face With Sweat", "\U0001F613"},{"Weary Face", "\U0001F629"},{"Tired Face", "\U0001F62B"},{"Face With Steam From Nose", "\U0001F624"},{"Pouting Face", "\U0001F621"},{"Angry Face", "\U0001F620"},{"Face With Symbols On Mouth", "\U0001F92C"},{"Smiling Face With Horns", "\U0001F608"},{"Angry Face With Horns", "\U0001F47F"},{"Skull", "\U0001F480"},{"Pile Of Poo", "\U0001F4A9"},{"Clown Face", "\U0001F921"},{"Ogre", "\U0001F479"},{"Goblin", "\U0001F47A"},{"Ghost", "\U0001F47B"},{"Alien", "\U0001F47D"},{"Alien Monster", "\U0001F47E"},{"Robot Face", "\U0001F916"},{"Grinning Cat Face", "\U0001F63A"},{"Grinning Cat Face With Smiling Eyes", "\U0001F638"},{"Cat Face With Tears Of Joy", "\U0001F639"},{"Smiling Cat Face With Heart-Eyes", "\U0001F63B"},{"Cat Face With Wry Smile", "\U0001F63C"},{"Kissing Cat Face", "\U0001F63D"},{"Weary Cat Face", "\U0001F640"},{"Crying Cat Face", "\U0001F63F"},{"Pouting Cat Face", "\U0001F63E"},{"See-No-Evil Monkey", "\U0001F648"},{"Hear-No-Evil Monkey", "\U0001F649"},{"Speak-No-Evil Monkey", "\U0001F64A"},{"Hundred Points", "\U0001F4AF"},{"Anger Symbol", "\U0001F4A2"},{"Collision", "\U0001F4A5"},{"Dizzy", "\U0001F4AB"},{"Sweat Droplets", "\U0001F4A6"},{"Dashing Away", "\U0001F4A8"},{"Hole", "\U0001F573"},{"Bomb", "\U0001F4A3"},{"Speech Balloon", "\U0001F4AC"},{"Left Speech Bubble", "\U0001F5E8"},{"Right Anger Bubble", "\U0001F5EF"},{"Thought Balloon", "\U0001F4AD"},{"Zzz", "\U0001F4A4"},{"Waving Hand", "\U0001F44B"},{"Raised Back Of Hand", "\U0001F91A"},{"Hand With Fingers Splayed", "\U0001F590"},{"Vulcan Salute", "\U0001F596"},{"Ok Hand", "\U0001F44C"},{"Crossed Fingers", "\U0001F91E"},{"Love-You Gesture", "\U0001F91F"},{"Sign Of The Horns", "\U0001F918"},{"Call Me Hand", "\U0001F919"},{"Backhand Index Pointing Left", "\U0001F448"},{"Backhand Index Pointing Right", "\U0001F449"},{"Backhand Index Pointing Up", "\U0001F446"},{"Middle Finger", "\U0001F595"},{"Backhand Index Pointing Down", "\U0001F447"},{"Thumbs Up", "\U0001F44D"},{"Thumbs Down", "\U0001F44E"},{"Oncoming Fist", "\U0001F44A"},{"Left-Facing Fist", "\U0001F91B"},{"Right-Facing Fist", "\U0001F91C"},{"Clapping Hands", "\U0001F44F"},{"Raising Hands", "\U0001F64C"},{"Open Hands", "\U0001F450"},{"Palms Up Together", "\U0001F932"},{"Handshake", "\U0001F91D"},{"Folded Hands", "\U0001F64F"},{"Nail Polish", "\U0001F485"},{"Selfie", "\U0001F933"},{"Flexed Biceps", "\U0001F4AA"},{"Leg", "\U0001F9B5"},{"Foot", "\U0001F9B6"},{"Ear", "\U0001F442"},{"Nose", "\U0001F443"},{"Brain", "\U0001F9E0"},{"Tooth", "\U0001F9B7"},{"Bone", "\U0001F9B4"},{"Eyes", "\U0001F440"},{"Eye", "\U0001F441"},{"Tongue", "\U0001F445"},{"Mouth", "\U0001F444"},{"Speaking Head", "\U0001F5E3"},{"Bust In Silhouette", "\U0001F464"},{"Busts In Silhouette", "\U0001F465"}
        };
  
        map<string, string>::iterator i;

    public:             
        string cpemoji(string name) { 
            /*
                this method will return emoji ascii with name
                if not exists show Error
            */
            if (marks.count(name)>0) {
                return marks[name];
            }
            else{
                return "Error";
            }
        }
        
        string show_exists_emoji_names(){
            /*
                this method will return all exist emoji names
            */
            string out="";
            for (i = marks.begin(); i != marks.end(); i++) {
                out+= i->first+"\n";
            }
            return out;
        }
        
        string show_exists_emojis(){
            /*
                this method will return all exist emojis
            */
            string out="";
            for (i = marks.begin(); i != marks.end(); i++) {
                out+= i->second+"\n";
            }
            return out;
        }
        
        bool save_emojis_to_file(string file_name, string emoji_name="No"){
            /*
                this method will save emojis to file_name
                file_name[requaried]: file path and name to open
                emoji_name[optional]: if don't say emoji_name we will save all exist emojis in file_name
            */
            if (emoji_name.compare("No")==0){
                string out="";
                for (i = marks.begin(); i != marks.end(); i++) {
                    out+= i->first+":"+ i->second +"\n";
                }
                ofstream MyFile(file_name);
                MyFile << out;
                MyFile.close();
                return 1;
            }else{
                if (marks.count(emoji_name)>0) {
                    string out=emoji_name+":"+marks[emoji_name];
                    ofstream MyFile(file_name);
                    MyFile << out;
                    MyFile.close();
                    return 1;
                }else{
                    //error this emoji name is not exists
                    return 0;
                }
            }
            
        }
};
