//
//  Ticket.h
//  Monopoly
//
//  Created by hambarkh on 12/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#ifndef __Monopoly__Ticket__
#define __Monopoly__Ticket__

#include <stdio.h>

#endif /* defined(__Monopoly__Ticket__) */

#include <list>

enum colorT{
    undefined =0,
    white,
    blue,
    green,
    red,
    yellow
};

class BuildingCost{
    int house1;
    int house2;
    int house3;
    int hotel;
};

class BuildingRent{
    int house1;
    int house2;
    int house3;
    int hotel;
};

class Ticket{

public:
    
private:
    colorT color;
    int price;
    int rent;
};

class WhiteT:public Ticket{
public:
    
private:
    Ticket *ticketPair;
    int modifedRent;
};

class colored: public Ticket{
public:
    
private:
    BuildingCost buildingCost;
    BuildingRent buildingRent;
};