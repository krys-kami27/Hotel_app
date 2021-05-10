#ifndef MODEL_IO_H
#define MODEL_IO_H

#include <ostream>
#include <fstream>
#include <string>
#include <vector>


class ModelIO
{
    private:
        std::vector < std::string > dane;
        std::string filename;
    public:
        ModelIO(std::string filename);
        void write_to_file(std::vector < std::vector < std::string > > data);
        std::vector < std::vector < std::string > > read_from_file();
};

#endif
