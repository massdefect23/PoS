#ifndef BLOCK_H
#define BLOCK_H

#include "Block.h"
#include <vector>

class Block {
    public:
        Block(int id, std::string data, std::string prev_hash);
    
        std::string get_hash() const;
        int get_id() const;
        std::string get_data() const;
        std::string get_prev_hash() const;

    private:
        int id_;
        std::string data_;
        std::string prev_hash_;
        std:string hash_;
};

#endif // BLOCK_H
