//
//  Player.h
//  Monopoly
//
//  Created by hambarkh on 12/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#ifndef __Monopoly__Player__
#define __Monopoly__Player__

#include <stdio.h>

#endif /* defined(__Monopoly__Player__) */

#include <string>
#include <list>
#include "Ticket.h"
using namespace std;

class Player{
public:
    
private:
    string name;
    int num;
    int balance;
    int position;
    bool isPlaying;
    list<Ticket> tickets;
};

