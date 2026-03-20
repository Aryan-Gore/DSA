#include <bits/stdc++.h>
using namespace std;

/* =========================================================
   🔹 APPROACH 1: HORIZONTAL SCANNING
   =========================================================
   Idea:
   - Take first string as prefix
   - Compare it with every other string
   - Reduce prefix until it matches
*/
string lcp_horizontal(vector<string>& strs) {
    // Edge case: empty input
    if (strs.empty()) return "";

    // Step 1: Assume first string is prefix
    string prefix = strs[0];

    // Step 2: Compare with remaining strings
    for (int i = 1; i < strs.size(); i++) {

        // Keep reducing prefix until it matches current string
        while (strs[i].find(prefix) != 0) {
            // Remove last character
            prefix = prefix.substr(0, prefix.length() - 1);

            // If prefix becomes empty → no common prefix
            if (prefix.empty()) return "";
        }
    }

    return prefix;
}


/* =========================================================
   🔹 APPROACH 2: VERTICAL SCANNING (BEST)
   =========================================================
   Idea:
   - Compare characters column-wise
   - Stop at first mismatch
*/
string lcp_vertical(vector<string>& strs) {
    // Edge case
    if (strs.empty()) return "";

    // Loop through each character of first string
    for (int i = 0; i < strs[0].length(); i++) {

        // Take current character as reference
        char c = strs[0][i];

        // Compare with same position in all other strings
        for (int j = 1; j < strs.size(); j++) {

            // Check:
            // 1. Index out of bounds
            // 2. Character mismatch
            if (i >= strs[j].length() || strs[j][i] != c) {
                // Return prefix till previous index
                return strs[0].substr(0, i);
            }
        }
    }

    // If all characters matched
    return strs[0];
}


/* =========================================================
   🔹 APPROACH 3: SORTING METHOD (OPTIMIZED TRICK)
   =========================================================
   Idea:
   - Sort strings
   - Compare only first and last string
*/
string lcp_sorting(vector<string>& strs) {
    // Edge case
    if (strs.empty()) return "";

    // Step 1: Sort the array lexicographically
    sort(strs.begin(), strs.end());

    // Step 2: Take first and last string
    string first = strs[0];
    string last = strs.back();

    // Step 3: Compare characters
    int i = 0;
    while (i < first.length() && i < last.length() && first[i] == last[i]) {
        i++;
    }

    // Step 4: Return common prefix
    return first.substr(0, i);
}


/* =========================================================
   🔹 MAIN FUNCTION (TESTING)
   =========================================================
*/
int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    cout << "Horizontal: " << lcp_horizontal(strs) << endl;
    cout << "Vertical:   " << lcp_vertical(strs) << endl;
    cout << "Sorting:    " << lcp_sorting(strs) << endl;

    return 0;
}