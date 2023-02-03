#include <iostream>
#include "Trie.h"

int main(int argc, const char* argv[])
{
    struct TrieNode* root = getNewNode();
    insert(root, "in");
    insert(root, "install");
    insert(root, "insertion");
    insert(root, "input");
    insert(root, "interior");
    insert(root, "key");
    insert(root, "word");
    insert(root, "weight");
    insert(root, "height");
    insert(root, "length");
    insert(root, "execute");
    insert(root, "exit");
    insert(root, "exercize");
    insert(root, "exam");
    insert(root, "assembly");
    insert(root, "ballans");
    insert(root, "charge");

    std::string buffer;
    string input;

    while (true)
    {
        cout << "Enter text or letter, press 'q' to exit: ";
        cin >> input;
        if (input == "q")
        {
            break;
        }

        string props[MAX_VARIANTS];
        const int num_variants = getProposition(root, input, props);

        if (num_variants != 0)
        {
            for (size_t i = 0; i < num_variants; ++i)
                std::cout << props[i] << std::endl;
        }
    }
    return 0;
}