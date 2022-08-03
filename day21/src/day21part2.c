//
// Created by shara on 2021-12-21.
//

#include "day21.h"
#include <stdio.h>
#define SCORE_LIMIT 21

#include "shared.h"

typedef struct {
    int64_t p1_wins, p2_wins;

} results;

typedef struct {
    int p1_pos, p2_pos;
    int p1_score, p2_score;
    int p1_turn;
} game;

results ******create_cache() {
    results ******cache = zalloc(sizeof(results *****) * 2);
    cache[0] = zalloc(sizeof(results ****) * 11);
    cache[1] = zalloc(sizeof(results ****) * 11);

    return cache;
}

void free_cache_p2_score(results **r) {
    if (r) {
        for (int i = 0; i < 20; i++) {
            free(r[i]);
        }
        free(r);
    }
}

void free_cache_p1_score(results ***r) {
    if (r) {
        for (int i = 0; i < 20; i++) {
            free_cache_p2_score(r[i]);
        }
        free(r);
    }
}

void free_cache_p2_turn(results ****r) {
    if (r) {
        for (int i = 0; i < 10; i++) {
            free_cache_p1_score(r[i]);
        }
        free(r);
    }
}

void free_cache_p1_turn(results *****r) {
    if (r) {
        for (int i = 0; i < 10; i++) {
            free_cache_p2_turn(r[i]);
        }
        free(r);
    }
}

void free_cache(results ******r) {
    if (r) {
        for (int i = 0; i < 2; i++) {
            free_cache_p1_turn(r[i]);
        }
        free(r);
    }
}

typedef struct {
    results *r;
    int existed;
} cached_result;

cached_result get_cached_item(results ******r, game g) {
    int existed = 1;
    results *****this_turn = r[g.p1_turn];
    results ****p1_pos = this_turn[g.p1_pos];

    if (!p1_pos) {
        this_turn[g.p1_pos] = zalloc(sizeof(results ***) * 11);
        p1_pos = this_turn[g.p1_pos];
        existed = 0;
    }
    results ***p2_pos = p1_pos[g.p2_pos];
    if (!p2_pos) {
        p1_pos[g.p2_pos] = zalloc(sizeof(results **) * 11);
        p2_pos = p1_pos[g.p2_pos];
        existed = 0;
    }
    results **p1_score = p2_pos[g.p1_score];
    if (!p1_score) {
        p2_pos[g.p1_score] = zalloc(sizeof(results *) * 32);
        p1_score = p2_pos[g.p1_score];
        existed = 0;
    }
    results *p2_score = p1_score[g.p2_score];
    if (!p2_score) {
        p1_score[g.p2_score] = zalloc(sizeof(results) * 32);
        p2_score = p1_score[g.p2_score];
        existed = 0;
    }
    if ((size_t)p2_score < 0x1000) {
        printf("whack\n");
    }

    results *p = p2_score + g.p2_score;
    if ((size_t)p == 0x123) {
        printf("heck\n");
    }
    return (cached_result){.r=p, .existed=existed};
}

void run_game(results ******r, game g) {
    for (int x = 1; x <= 3; x++) {
        for (int y = 1; y <= 3; y++) {
            for (int z = 1; z <= 3; z++) {
                int roll = x + y + z;
                game new_game = g;
                if (new_game.p1_turn) {
                    new_game.p1_pos += roll;
                    if (new_game.p1_pos > 10) {
                        new_game.p1_pos %= 10;
                    }
                    new_game.p1_score += new_game.p1_pos;
                    new_game.p1_turn = 0;
                    cached_result res = get_cached_item(r, new_game);
                    if (new_game.p1_score >= SCORE_LIMIT) {
                        res.r->p1_wins++;
                    } else {
                        if (res.existed) {
//                            cached_result res1 = get_cached_item(r, g);
//                            res1.r->p1_wins += res1.r->p1_wins;
//                            res1.r->p2_wins += res1.r->p2_wins;
                        } else {
                            run_game(r, new_game);
                        }
                    }
                } else {
                    new_game.p2_pos += roll;
                    if (new_game.p2_pos > 10) {
                        new_game.p2_pos %= 10;
                    }
                    new_game.p2_score += new_game.p2_pos;
                    new_game.p1_turn = 1;
                    cached_result res = get_cached_item(r, new_game);
                    if (new_game.p2_score >= SCORE_LIMIT) {
                        res.r->p2_wins++;
                    } else {
                        if (res.existed) {
//                            cached_result res1 = get_cached_item(r, g);
//                            res1.r->p1_wins += res1.r->p1_wins;
//                            res1.r->p2_wins += res1.r->p2_wins;
                        } else {
                            run_game(r, new_game);
                        }
                    }
                }
            }
        }
    }
}

/*
 * turn (0-1) result*****
 * p1 pos (1-10) result****
 * p2 pos (1-10) result***
 * p1 score (0-20) result**
 * p2 score (0-20) result*
 * result
 */

int main(void) {
    int64_t in = read_input("../../day21/resources/input.txt");
    int p1 = 4;// in >> 32;
    int p2 = 8;//in & 0xFFFFFFFF;
    results ******r = create_cache();
    game g = {p1, p2, 0, 0, 1};
    run_game(r, g);

    printf("p1 wins %ld, p2 win %ld", r[1][p1][p2][0][0]->p1_wins, r[1][p1][p2][0][0]->p2_wins);
    free_cache(r);
    return 0;
}