#pragma once

#include <iostream>

void dispBanner(){ //will be moved to separate header later
    std::cout << blue_fg;
    std::cout << "##     ##  ##  ##    ## ########  ######  ##      ## ######## ######## ########  ######## ######## \n"; 
    std::cout << "###   ###  ##  ###   ## ##       ##    ## ##  ##  ## ##       ##       ##     ## ##       ##     ##\n"; 
    std::cout << "#### ####  ##  ####  ## ##       ##       ##  ##  ## ##       ##       ##     ## ##       ##     ##\n"; 
    std::cout << "## ### ##  ##  ## ## ## ######    ######  ##  ##  ## ######   ######   ########  ######   ######## \n"; 
    std::cout << "##     ##  ##  ##  #### ##             ## ##  ##  ## ##       ##       ##        ##       ##   ##  \n"; 
    std::cout << "##     ##  ##  ##   ### ##       ##    ## ##  ##  ## ##       ##       ##        ##       ##    ## \n"; 
    std::cout << "##     ##  ##  ##    ## ########  ######   ###  ###  ######## ######## ##        ######## ##     ##\n";
    std::cout << endl << reset;
}