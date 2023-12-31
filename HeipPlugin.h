#ifndef HEIPPLUGIN_H
#define HEIPPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class HeipPlugin : public Plugin
{
public: 
 std::string toString() {return "Heip";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
