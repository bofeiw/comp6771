#ifndef ASSIGNMENTS_WL_WORD_LADDER_H_
#define ASSIGNMENTS_WL_WORD_LADDER_H_

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

/*
 * return the word ladders in vector, size can be 0 when no ladder exists
 * returned ladders are sorted
 * */
std::vector<std::vector<std::string>> ComputeLadder(std::unordered_set<std::string>& words,
                                                    const std::string& from,
                                                    const std::string& to);

/*
 * print ladders to stdout if there are ladders found
 * print Each solution appears on a separate line. The very first one is printed
 * after "Found ladder: " if no ladders found, print No ladder found.
 */
void PrintLadders(const std::vector<std::vector<std::string>>& ladders);

#endif  // ASSIGNMENTS_WL_WORD_LADDER_H_
