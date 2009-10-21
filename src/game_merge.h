/******************************************************************************/
// Free implementation of Bullfrog's Dungeon Keeper strategy game.
/******************************************************************************/
/** @file game_merge.h
 *     Header file for game_merge.c.
 * @par Purpose:
 *     Saved games maintain functions.
 * @par Comment:
 *     Just a header file - #defines, typedefs, function prototypes etc.
 * @author   Tomasz Lis
 * @date     21 Oct 2009 - 25 Nov 2009
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/

#ifndef DK_GAMEMERGE_H
#define DK_GAMEMERGE_H

#include "bflib_basics.h"
#include "globals.h"

#include "config_crtrmodel.h"
#include "config_rules.h"

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
#define MESSAGE_TEXT_LEN           1024
#define QUICK_MESSAGES_COUNT         50

#define UNSYNC_RANDOM(range) LbRandomSeries(range, &game.unsync_rand_seed, __func__, __LINE__)
#define ACTION_RANDOM(range) LbRandomSeries(range, &game.action_rand_seed, __func__, __LINE__)
/******************************************************************************/

/**
 * Defines additional elements, which are not stored in main 'Game' struct.
 */
struct GameAdd {
    unsigned long turn_last_checked_for_gold;
    char quick_messages[QUICK_MESSAGES_COUNT][MESSAGE_TEXT_LEN];
    struct SacrificeRecipe sacrifice_recipes[MAX_SACRIFICE_RECIPES];
};

/******************************************************************************/
extern struct GameAdd gameadd;
/******************************************************************************/
/******************************************************************************/
#ifdef __cplusplus
}
#endif
#endif
