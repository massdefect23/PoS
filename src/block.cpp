#include "Block.h"
#include <cstring>
#include <sstream>
#include <string>

Block::Block(int id, std::string data, std::string prev_hash)
    : id_(id), data_(data), prev_hash(prev_hash) {
        std::stringstream ss;
        ss << id_ << data_ << prev_hash_;
        hash_ = ss.str();
}

std::string Block::get_hash() const { return hash_; }

int Block::get_id() const { return id_; }

std::string Block::get_data() const { return data_; }

std::string Block::get_prev_hash() const { return prev_hash_; }