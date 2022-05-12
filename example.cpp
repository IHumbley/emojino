#include <iostream>
#include "emojino.h"
using namespace std;

int main()
{
    emojino em;
    cout<<em.cpemoji("Zzz");
    // cout<<em.show_exists_emoji_names();
    // cout<<em.show_exists_emojis();
    cout<<em.save_emojis_to_file("Humble.txt", "Zzz");
    
    return 0;
}
