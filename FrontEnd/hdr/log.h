#ifndef LOG_H
#define LOG_H

#define DEBUG_LOG 1

#ifdef DEBUG_LOG
    #define PrintLogStart(path) \
            _PrintLogStart(path)
    #define PrintLogFinish() \
            _PrintLogFinish()
    #define PrintLogTree(myTree) \
            _PrintLogTree(myTree, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#else
    #define PrintLogTree(myTree)
    #define PrintLogStart()
    #define PrintLogFinish()
#endif

void  _PrintLogTree (BinaryTree_t* myTree, 
                    const char* file,  const char* function, const size_t line);
void  _PrintLogStart (const char* log_file_path);
void  _PrintLogFinish (void);

#define FOLDER_LOG "log"
#define FILE_LOG "log.html"
#define FILE_GRAPH "graph.dot"
#define TYPE_OF_IMAGE "svg"

const size_t SIZE_OF_PATH   = 500;
const size_t SIZE_OF_POINTER = 13;
const size_t SIZE_OF_COMMAND = SIZE_OF_PATH + 40;

#define FILL_BACK_COLOR "#FFFACD"
#define FILL_BACK_GRAPH "#FFA07A"
#define FILL_BACK_GRAPH_NULL "#BC8F8F"
#define COLOR_FRAME "#000000"
#define COLOR_STIPPLE "#483D8B"
#define COLOR_EDGE_GRAPH "#000000"
#define COLOR_EDGE_HEAD "#000000"

#define COLOR_INIT "#000000"
#define COLOR_NUMBER "#9ACD32"
#define COLOR_OPERATOR "#40E0D0"
#define COLOR_VARIABLE "#ffdb58" 
 
#endif