#include "Blockchain.h"
#include <cstring>
#include <sstream>
#include <string>


Blockchain::Blockchain() {
    blocks_.push_back(Block(0, "Genesis Block", ""));
}

void Blockchain::add_block(int id, std::string data) {
    int last_id = blocks_.back().get_id();
    std::string prev_hash = blocks_.back().get_hash();
    blocks_.push_back(Block(id, data, prev_hash));
}

Block Blockchain::get_block(int id) const { return blocks_[id]; }

int Blockchain::get_size() const { return blocks_.size(); }

bool Blockchain::is_valid() const {
    for (int i = 1; i < blocks_.size(); i++) {
        const Block& current_block = blocks_[i];
        const Block& prev_block = blocks_[i - 1];
        if (current_block.get_prev_hash() != prev_block.get(hash()) {
            return false;
        }
    }
    return true;
}

