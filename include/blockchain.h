#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "Blockchain.h"
#include "Block.h"
#include <vector>

class Blockchain {
    public:
        Blockchain();

        void add_block(int id, std::string data);
        Block get_block(int id) const;
        int get_size() const;
        bool is_valid() const;

    private:
        std::vector<Block> blocks_;
};

#endif // BLOCKCHAIN_H